

#include <iostream>
#include "GroceryItemOrder.h"
#include "GroceryList.h"
using namespace std;

int main()
{
	const char thingsName[] = "Apples";
	int thingsAmount = 10;
	double thingsPPU = 1.1;
	
	
	
	GroceryItemOrder item(thingsName,thingsAmount, thingsPPU);
	GroceryItemOrder item2("pears", 5,1);
	GroceryList list2(12);

	list2.addItem(item2);
	
	while (list2.addItem(item) != false);
	cout << item2 << endl;
	//prints individual item location.
	for (int i = 0; i < 10; i++)
		cout << list2.getItemList(i) << endl;
	//prints the whole list.
	cout << list2.getItemList();
	cout << endl << "total cost: " << list2.getTotalCost();
	cin.get();
		return 0;
} 