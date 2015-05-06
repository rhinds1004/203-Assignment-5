
#ifndef G_ItemOrder
#define G_ItemOrder
#include <cstring>
#include <iostream>
class GroceryItemOrder;
std::ostream &operator << (std::ostream &, const GroceryItemOrder &);

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
	GroceryItemOrder(const GroceryItemOrder& Source);
	// Assignment operator
	GroceryItemOrder& operator=(const GroceryItemOrder& cSource);
	~GroceryItemOrder();

	friend std::ostream &operator << (std::ostream &, const GroceryItemOrder &);
};

#endif
