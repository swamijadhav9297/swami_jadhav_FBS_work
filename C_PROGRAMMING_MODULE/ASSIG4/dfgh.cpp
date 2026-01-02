#include<stdio.h>
typedef struct manage
{
	int taskid;
	char description;
	char status;
}mange;
void main()
{
	mange arr[100];
	
	printf("----menu driven------");
	printf("select 1 for add");
	printf("select 2 for update");
	printf("select 3 for display");
	printf("select 0 for exit");
	Printf("select any number given in menu driven");
	int choose;
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:addmenu();
			break;
		case 2:updatemenu();
			break;
		case 3:displaymenu();
			break;
				
	}
	
}