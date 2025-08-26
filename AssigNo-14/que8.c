//8. Distance ( feet, inch)
#include<stdio.h>
#include<string.h>
struct student
{
	float feet;
	float inch;
	
};
void main()
{
	struct student D1,D2;
	
	D1.feet=1.00;
	D1.inch=6.00;
	printf("feet=%f inch=%f",D1.feet,D1.inch);
	
	printf("\n Enter the salesmanager 2 values :-");
	scanf("%f",&D2.feet);
	scanf("%f",&D2.inch);
	printf("feet=%f inch=%f",D2.feet,D2.inch);

}