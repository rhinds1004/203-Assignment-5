

#include <iostream>
#include "GroceryItemOrder.h"
#include "GroceryList.h"
using namespace std;

int main()
{
	int i = 0;
	char thingsName[] = "Apples";
	int thingsAmount = 10;
	double thingsPPU = 2.53;
	GroceryList list1;
	//GroceryItemOrder item;
	GroceryItemOrder item(thingsName,thingsAmount, thingsPPU);
	cout << item.itemCost();
	//GroceryList list1;
	for (i = 0; i < 10; i++)
	list1.addItem(item);
	return 0;
}