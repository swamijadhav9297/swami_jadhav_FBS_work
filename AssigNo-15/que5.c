//5.movie database :Create a program thats uses structurs to manage amovies database withs details like title,director,release years and genre. 
//allow users to add search for and update movie records.
#include<stdio.h>
#include<string.h>
typedef struct manage
{
	char title[50];
	char director[50];
	int reyear;
	char genr[50];
		
}manage;


void main()
{
	int n;
	manage movie[100];
	
	int choice,count=0,i;
	char searchtitle[50];

	while(1)
	{
	
	printf("\n----Movie Database----\n");
	printf("1. add Movies\n2. search movie\n3. updeat movies\n4. display All\n5. exit\n");
	
	printf("\nEnter choice: ");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("Enter the title: ");
		scanf(" %[^\n]",movie[count].title);
		
		printf("Enter the director name: ");
		scanf(" %[^\n]",movie[count].director);
		
		printf("Enter release year: ");
		scanf(" %d",&movie[count].reyear);
		
		printf("Enter gener: ");
		scanf(" %[^\n]",movie[count].genr);
		
		count++;
		
		printf("Movie added!\n");
	}
	
	else if(choice == 2)
	{
		printf("Enter the titale to search: ");
		scanf(" %[^\n]",&searchtitle);
		
		for(i=0;i<count;i++)
		{
			if(strcmp(movie[i].title,searchtitle)==0)
			{
				printf("found: %s | %s | %d | %s \n",movie[i].title,movie[i].director,movie[i].reyear,movie[i].genr);
				break;
			}
		}
		if(i==count)
		{
			printf("Movie not fount!");
		}
	}
	
	else if(choice == 3)
	{
		printf("Entre the title to update: ");
		scanf(" %[^\n]",searchtitle);
		
		for(i=0;i<count;i++)
		{
			if(strcmp(movie[i].title,searchtitle)==0)
			{
			printf("Enter the new drictor");
			scanf(" %[^\n]",movie[i].director);
			
			printf("Enter the  new year");
			scanf(" %d",&movie[i].reyear);
			
			printf("Enter the genr");
			scanf(" %[^\n]",movie[i].genr);
			break;
			}
		}	
		if(i==count)
		{
			printf("movie not found!");
		}
	}
	
	else if(choice == 4)
	{
		printf("---Display All---\n");
		for(i=0;i<count;i++)
		{
			printf("%d %s | %s | %d | %s\n",i+1,movie[i].title,movie[i].director,movie[i].reyear,movie[i].genr);
		}
	}
	else if(choice == 5)
	{
		printf("Exiting!");
		
	}
	else
	{
		printf("Invalid Choice!\n");
	}
}
}