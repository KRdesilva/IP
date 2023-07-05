#include<stdio.h>

struct item
{
	int itemNo;
	double price;
	int quantity;	
}
item1,item2;

int main(void)
{
//input data
	printf("item No:");
	scanf("%d",&item1.itemNo);
	
	printf("price:");
	scanf("%lf",&item1.price);
	
	printf("quantity:");
	scanf("%d",&item1.quantity);
	
	printf("item No:");
	scanf("%d",&item2.itemNo);
	
	printf("price: ");
	scanf("%lf", &item2.price);
	
	printf("quantity: ");
	scanf("%d", &item2.quantity);
	
//display data
	printf("itemNo:\t");
	printf("price:\t");
	printf("quantity:\t");
	
	
	printf("\n");
	
	printf("%d\t",item1.itemNo);
	printf("%.2f\t",item1.price);
	printf("%d\t",item1.quantity);
	
	printf("\n");
	
	printf("%d\t",item2.itemNo);
	printf("%.2f\t",item2.price);
	printf("%d\t",item2.quantity);
	
	return 0;
	
}



	
	


