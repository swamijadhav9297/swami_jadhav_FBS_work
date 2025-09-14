//Structure
//1. Create a structure Book with data members as bname, id, author, price. Accept the values of all these members from user and display them. 

#include<stdio.h>
typedef struct book
{
	char bname[20];
	int id;
	char author[20];
	int price;
}book;
void store(book* memb);
void display(book memb);
void main()
{
	book memb;
	store(&memb);
	display(memb);
}
void store(book* memb)
{
	for(int i=0;i<5;i++)
	{
	printf("enter data members as bname, id, author, price \n");
		scanf("%s",memb->bname);
		scanf("%d",&memb->id);
		scanf("%s",memb->author);
		scanf("%d",&memb->price);
}
}
void display(book memb)
{
	for(int i=0;i<5;i++)
	{
		printf("bname=%s\n",memb.bname);
		printf("id=%d\n",memb.id);
		printf("author=%s\n",memb.author);
		printf("price=%d\n",memb.price);
	}
}