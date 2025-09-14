//4.point of sale system:build a simple point of sale system using struct to represent products with attributes like names,price,and quantity 
//allow users to add items to cart and calculate the total cost.
#include<stdio.h>
#include<stdlib.h>

typedef struct product
{
	char name[50];
	float price;
	int quantity;
}product;

void main()
{
	int i,n;
	float total=0;
	
	printf("Enter numbers of items in cards: ");
	scanf("%d",&n);
	
	product carts[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter product %d details\n",i+1);
		printf("Name: ");
		scanf("%s",carts[i].name);
		printf("price: ");
		scanf("%f",&carts[i].price);
		printf("Quantity: ");
		scanf("%d",&carts[i].quantity);
		
		total=total+carts[i].price*carts[i].quantity;
	}
	
	printf("\n----Bills-----\n");
	for(i=0;i<n;i++)
	{
		printf("%d]. product bill\n",i+1);
		printf("%s x %d =%2f\n",carts[i].name,carts[i].quantity,total);
	}
}