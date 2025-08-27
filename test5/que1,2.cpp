//1.WAP to calculate selling price of book based on cost price and discount.( using function and nested if- else )
//#include <stdio.h>
float calculateSellingPrice(float , float ) ;
int main() 
{
    float cost, discount, sp;

    printf("Enter Cost Price of book: ");
    scanf("%f", &cost);

    printf("Enter Discount (in %%): ");
    scanf("%f", &discount);

    sp = calculateSellingPrice(cost, discount);

    printf("Selling Price = %.2f\n", sp);

}

float calculateSellingPrice(float cost, float discount) 
{
	float sp;
	if (discount > 0) 
	{
        if (discount < 100)
		{
            sp = cost - (cost * discount / 100);
        }
		else 
		{
            sp = 0;  
        }
    } 
	else 
	{
        sp = cost;  
    }
    return sp;
}



//2. WAP to initialize some amount in your account. Then give choice to user for deposit or withdraw. and display updated amount. Condition to withdraw (if the balance is less than 3000 display can't withdraw the amount balance is not sufficient).( using function )
#include <stdio.h>
int deposit(int , int );
int withdraw(int , int );
int main() 
{
    int balance = 5000;  
    int choice, amount;

    printf("Initial Balance: %d\n", balance);
    printf("Enter your choice:\n1. Deposit\n2. Withdraw\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter amount to deposit: ");
        scanf("%d", &amount);
        balance = deposit(balance, amount);
    } else if (choice == 2) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);
        balance = withdraw(balance, amount);
    } else {
        printf("Invalid choice!\n");
    }

    printf("Updated Balance = %d\n", balance);
}

int deposit(int balance, int amount)
{
    balance += amount;
    return balance;
}
int withdraw(int balance, int amount) 
{
    if (balance < 3000) {
        printf("Can't withdraw, balance is less than 3000.\n");
    } else if (amount > balance) {
        printf("Can't withdraw, not sufficient balance.\n");
    } else {
        balance -= amount;
    }
    return balance;
}