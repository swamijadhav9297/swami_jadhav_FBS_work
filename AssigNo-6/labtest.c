#include<stdio.h>
void main()
//{
////	int no,
//	int start=10;
//	int end=25;
////	printf("enter the number");
////	scanf("%d",&no);
//	for(int start=10;end>=start;start++)
//	{
//		start++;
//		printf("%d \n",start);
//	}
//}



//{
//	int start=10;
//	int end=25;
////	printf("enter the number");
////	scanf("%d",&no);
//	for(int start=1;end>=start;start++)
//	{
//	start++;
//	printf("%d \n",start);
//	}
//}

{
	int range,add=0;
	printf("enter the range");
	scanf("%d",&range);
	for(int i=1;i<=range;i=i+2)
	{
		add=add+i;
		
	}printf("%d",add);
}