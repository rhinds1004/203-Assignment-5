#ifndef G_List
#define G_List
#define SIZE 10
#include "GroceryItemOrder.h"
class GroceryList
{
private:
	//GroceryItemOrder gListArray[SIZE];
	GroceryItemOrder * gListArray = new GroceryItemOrder[SIZE];
	int mArrayLength;
	void setListPos(int arraySlot);
public:
	
	void addItem( const GroceryItemOrder& itemAdd);
	GroceryList();
	~GroceryList();
};

#endif