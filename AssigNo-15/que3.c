//3. Write a program to create an array for 10 players. For each player store name, no. of 
//matches played, runs, wickets takes. 
//a. Create function to Accept the information of each player. 
//b. Create function to display the information of all the players 
//c. Display the information of player who made maximum runs and the one who took 
//maximum number of wickets.
//4. Point of Sale System: Build a simple point of sale system using structures to 
//represent products with attributes like name, price, and quantity. Allow users 
//to add items to a cart and calculate the total cost.
//5. Movie Database: Create a program that uses structures to manage a movie 
//database with details like title, director, release year, and genre. Allow users 
//to add, search for, and update movie records
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 10
//#define NAME_LENGTH 50
//
//// Define the Player structure
//struct Player {
//    char name[NAME_LENGTH];
//    int matches;
//    int runs;
//    int wickets;
//};
//
//// Function to accept player information
//void acceptPlayers(struct Player players[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("\nEnter details for Player %d:\n", i + 1);
//        printf("Name: ");
//        scanf(" %[^\n]", players[i].name);  // Read string with spaces
//        printf("Matches played: ");
//        scanf("%d", &players[i].matches);
//        printf("Total runs: ");
//        scanf("%d", &players[i].runs);
//        printf("Total wickets: ");
//        scanf("%d", &players[i].wickets);
//    }
//}
//
//// Function to display player information
//void displayPlayers(struct Player players[], int size) {
//    printf("\n%-20s %-10s %-10s %-10s\n", "Name", "Matches", "Runs", "Wickets");
//    for (int i = 0; i < size; i++) {
//        printf("%-20s %-10d %-10d %-10d\n",
//               players[i].name,
//               players[i].matches,
//               players[i].runs,
//               players[i].wickets);
//    }
//}
//
//// Function to display player with maximum runs and wickets
//void displayTopPerformers(struct Player players[], int size) {
//    int maxRunsIndex = 0;
//    int maxWicketsIndex = 0;
//
//    for (int i = 1; i < size; i++) {
//        if (players[i].runs > players[maxRunsIndex].runs) {
//            maxRunsIndex = i;
//        }
//        if (players[i].wickets > players[maxWicketsIndex].wickets) {
//            maxWicketsIndex = i;
//        }
//    }
//
//    printf("\nPlayer with Maximum Runs:\n");
//    printf("Name: %s, Runs: %d\n", players[maxRunsIndex].name, players[maxRunsIndex].runs);
//
//    printf("Player with Maximum Wickets:\n");
//    printf("Name: %s, Wickets: %d\n", players[maxWicketsIndex].name, players[maxWicketsIndex].wickets);
//}
//
//// Main function
//int main() {
//    struct Player players[SIZE];
//
//    // Accept player information
//    acceptPlayers(players, SIZE);
//
//    // Display all players
//    displayPlayers(players, SIZE);
//
//    // Display top performers
//    displayTopPerformers(players, SIZE);
//
//    return 0;
//}

#include<stdio.h>
#include<string.h>

#define SIZE 10
#define NAME_LENGTH 50

typedef struct player
{
	char name[NAME_LENGTH];
	int noofmatches;
	int runs;
	int wicket;
}player;

void acceptplayer(player arr[],int SIZE);
void displayplayer(player arr[],int SIZE);
void main()
{
	player arr[SIZE];
	acceptplayer(arr[],SIZE);
	displayplayer(arr[],SIZE);
	
}
void acceptplayer(player arr[],int SIZE)
{
	for(int i=0;i< SIZE;i++)
	{
	printf("create an array for 10 players %d :-",i+1);
		scanf("%s",&arr[i].name);
		scanf("%d",&arr[i].noofmatches);
		scanf("%d",&arr-[i].runs);
		scanf("%d",&arr[i].wicket);	
	}
}
void displayplayer(player arr[],int SIZE)
{
	for(int i=0;i<SIZE;i++)
	{
	printf("create an array for 10 players %d :-",i+1);
		printf("%s",arr[i].name);
		printf("%d",arr[i].noofmatches);
		printf("%d",arr[i].runs);
		printf("%d",arr[i].wicket);
	}
}