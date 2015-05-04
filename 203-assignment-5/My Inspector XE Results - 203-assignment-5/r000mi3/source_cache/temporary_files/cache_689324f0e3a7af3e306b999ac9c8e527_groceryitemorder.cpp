#include "GroceryItemOrder.h"
#include <cmath>
//default
GroceryItemOrder::GroceryItemOrder()
{
	///*mItemName = new char[];
	//mItemQuantity = 0;
	//mItemPricePerUnit = 0;*/

	//strcpy(mItemName, iName);
}

//Overloaded constructor that takes item name as a c string, item quanity as an int,
//item price per unit cost as a double.
GroceryItemOrder::GroceryItemOrder(const char * iName, const int iAmt, const double iPPU)
{
	mItemName = new char[strlen(iName) + 1];
	mItemQuantity = iAmt;
	mItemPricePerUnit = iPPU;

	strcpy(mItemName, iName);
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
//	delete [] mItemName;
}
