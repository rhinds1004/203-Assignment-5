#include "GroceryItemOrder.h"
//default
GroceryItemOrder::GroceryItemOrder()
{
	//here for GroceryList Class to work.
	mItemName = NULL;
}

// Copy constructor
GroceryItemOrder::GroceryItemOrder(const GroceryItemOrder& cSource)
{
	int tempSize = strlen(cSource.mItemName) + 1;
	mItemQuantity = cSource.mItemQuantity;
	mItemPricePerUnit = cSource.mItemPricePerUnit;
	//allocates memory and copies source mItemName into copy mItemName and appends a NULL to copy char array
	//if the object member pointer is not NULL.
	if (*(cSource.mItemName) != NULL)
	{
		mItemName = new char[tempSize];
		strncpy(mItemName, cSource.mItemName, tempSize);
		cSource.mItemName[tempSize - 1] = '\0';
	}
	else
		mItemName = NULL;
}

// Assignment operator
GroceryItemOrder& GroceryItemOrder::operator=(const GroceryItemOrder& cSource)
{
	// check for self-assignment
	if (this == &cSource)
		return *this;
	int tempSize = strlen(cSource.mItemName) + 1;
	// deallocate any value that this array is holding
	delete[] mItemName;

	//if the object member pointer is not NULL.
	//allocates memory and copies source mItemName into copy mItemName and appends a NULL to copy char array
	if (*(cSource.mItemName) != NULL)
	{
		mItemName = new char[tempSize];
		strncpy(mItemName, cSource.mItemName, tempSize);
		cSource.mItemName[tempSize - 1] = '\0';
	}
	else
		mItemName = NULL;

	return *this;
}

//Overloaded constructor that takes item name as a c string, item quantity as an int,
//item price per unit cost as a double.
GroceryItemOrder::GroceryItemOrder(const char *iName, const int iAmt, const double iPPU)
{
	int tempSize = strlen(iName) + 1;
	mItemName = new char[tempSize];

	mItemQuantity = iAmt;
	mItemPricePerUnit = iPPU;

	strncpy(mItemName, iName, tempSize);
	mItemName[tempSize - 1] = '\0';
}

//Sets object member item quaninty to the passed amount if it 0 or greater.
void GroceryItemOrder::setItemQuantity(const int newAmt)
{
	if (newAmt >= 0)
	{
		mItemQuantity = newAmt;
	}
}
//Function that returns the total cost of an item at a given quanity
double GroceryItemOrder::itemCost()
{
	return getItemQuantity()*(getItemPPU()*1.0);
}
GroceryItemOrder::~GroceryItemOrder()
{
	delete [] mItemName;
}
