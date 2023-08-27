#include <stdio.h>

struct Item{
	int itemNo;
	double price;
	int quantity;
};

int main (){
	struct Item item1;
	struct Item item2;
	
	item1.itemNo = 1;
	item1.price = 10.00;
	item1.quantity = 12;
	
	item2.itemNo = 2;
	item2.price = 15.00;
	item2.quantity = 4;
	
	printf("Item No  Price    Quantity\n");
	printf("   %d\t%.2lf\t%d\n", item1.itemNo, item1.price, item1.quantity);
	printf("   %d\t%.2lf\t%d\n", item2.itemNo, item2.price, item2.quantity);
	return 0;
}