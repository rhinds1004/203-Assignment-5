#ifndef G_List
#define G_List
#define SIZE 10
#include "GroceryItemOrder.h"

class GroceryList
{
private:
	int mArrayLength;
	
	GroceryItemOrder *gListItem[SIZE] ;
	int mCurrentSize;
	double mTotalCost;
public:
	GroceryList(int size);
	//prints individual item location.
	GroceryItemOrder getItemList(int i) const
	{
		return *gListItem[i];
	}
	//prints the whole list.
	GroceryItemOrder getItemList() const
	{
		int i;
		for (i = 0; i < mCurrentSize-1; i++)
			std::cout << *gListItem[i] << std::endl;
		return *gListItem[i];
	}
	bool addItem(const GroceryItemOrder &itemAdd);
	int getArrayLengthCounter() const
	{
		 return mCurrentSize;
	}
	double getTotalCost() const
	{
		return mTotalCost;
	}
	~GroceryList();
};

#endif