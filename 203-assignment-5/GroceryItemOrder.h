#include <iostream>
#ifndef G_ItemOrder
#define G_ItemOrder
#include <cstring>
class GroceryItemOrder
{
private:
	char *mItemName;
	int mItemQuantity;
	double mItemPricePerUnit;
	//double mItemTax;
public:
	GroceryItemOrder();
	GroceryItemOrder(const char *itemName, const int itemAmt, const double itemPPU);
	void setItemQuantity(const int);
	int getItemQuantity() const
	{
		return mItemQuantity;
	}
	double getItemPPU() const
	{
		return mItemPricePerUnit;
	}
	double itemCost();
	// Copy constructor
	GroceryItemOrder::GroceryItemOrder(const GroceryItemOrder& Source);
	// Assignment operator
	GroceryItemOrder& GroceryItemOrder::operator=(const GroceryItemOrder& cSource);
	~GroceryItemOrder();
};

#endif
