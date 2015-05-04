

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
	GroceryList list2(10);

	list2.addItem(item2);
	
	while (list2.addItem(item) != false);
	cin.get();
		return 0;
} 