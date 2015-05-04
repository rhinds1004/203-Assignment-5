#ifndef G_List
#define G_List
#define SIZE 10
#include "GroceryItemOrder.h"
class GroceryList
{
private:
	int mArrayLength;
	GroceryItemOrder *gListItem[SIZE] = {};
	int mCurrentSize;
	double mTotalCost;
public:
	GroceryList(int size);

	bool addItem(const GroceryItemOrder &itemAdd);
	int getArrayLengthCounter() const
	{
		 return mCurrentSize;
	}
	double totalCost() const;
	~GroceryList();
};

#endif