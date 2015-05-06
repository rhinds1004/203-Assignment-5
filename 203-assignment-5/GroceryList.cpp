#include "GroceryList.h"

//Constructor
// parameter is size of List. Max unique item amount is 10.
GroceryList::GroceryList(int size)
{
	if(size > 10)
	{
		std::cout << "GroceryList can only hold 10 unique item. Excess was not added to list." << std::endl;
		size = 10;
	}
	for (int i = 0; i < SIZE; i++)
	{
		gListItem[i] = NULL;
	}
	mArrayLength = size;
	mCurrentSize = 0;
	mTotalCost = 0;
}

//A function that will add a GroceryItemOrder object to a GroceryList object
//if the list is not full ( items 10 or greater).
bool GroceryList::addItem(const GroceryItemOrder &itemAdd)
{
	int i = -1;
	bool status;
	//increments through GroceryList object untill an open spot is found or i becomes larger then max amount.
	do
	{
		i++;
		
	} while (gListItem[i] != NULL);
	if (i < mArrayLength)
	{
		//memory allocation here need needs non default destructor. 
		//Since item name memory is allocated else where, have to allocate new memory to prevent shallow copying.
		gListItem[i] = new GroceryItemOrder(itemAdd);
		mCurrentSize += 1;
		mTotalCost += gListItem[i]->itemCost();
		status = true;
	}
	else
	{
		std::cout << "Error. List is full." << std::endl;
		status = false;
	}
	return status;
}



//Destructor
GroceryList::~GroceryList()
{
	
	for (int i = 0; i < mCurrentSize; i++)
	{
		delete gListItem[i];
	}
	
}
