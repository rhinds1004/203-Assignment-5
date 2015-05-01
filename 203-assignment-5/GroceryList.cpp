#include "GroceryList.h"


GroceryList::GroceryList()
{
	mArrayLength = 0;
}

void GroceryList::addItem(const GroceryItemOrder& itemAdd)
{
	if (mArrayLength < SIZE)
	{
		gListArray[mArrayLength] = itemAdd;
		mArrayLength++;
		
	}
}

GroceryList::~GroceryList()
{
	//delete[] gListArray;
}
