#include<stdio.h>
int add(int ,int );
int area(int );
int radius(int );
void temp();
int sum(int ,int ,int ,int ,int );
int squear(int );
int cube(int );
void hours(double , int );
int peri(int ,int );
void main()
{
	//
	int a,b;
	a=10;
	b=20;
	int	c= add(a,b);
	printf("addition of two integers %d \n", c);
	
	//
		
	int no=5;
	int	k = area(no);
	printf("the area is %d \n", k);	
	//
	int rad=10;
	int area=radius(rad);
	printf("arrea of circle is %d \n",area);
	//
	temp();
	//
	int n1,n2,n3,n4,n5;
	n1=10;
	n2=20;
	n3=30;
	n4=40;
	n5=50;
	int average=sum( n1,n2,n3,n4,n5);
	printf("the average %d \n",average);
	//
	int sqcub=10;
	int squ=squear(sqcub);
	printf("the square is %d \n",squ);
	int cu=cube(sqcub);
	printf("the cube is %d \n",cu);
	//
	
	int min=180;
	int sec=25;
	hours(min,sec);
	//
	
	int len=4;
	int width=8;
	int perimeter=peri(len,width);
	printf("perimeter of ractangle is %d \n",perimeter);
	//
}
// addition start
int add(int x,int y)
{
    int c=x+y;
	return c;
	
}
//end of addition

// start of area
int area(int a)
{
	int area=3.14*5*5;
	return area;
}
// end of area

// start of radius
int radius(int a)
{
	
	int area=3.14*a;
	return area;
}
// end of radius

// start of temp
void temp()
{
	int a, b,temp;
	
	a=10;
	b=20;
	
	temp=a;
	a=b;
	b=temp;
	
}

//end of temp
// start of sum
int sum(int a,int b,int c,int d,int e)
{
	
	
	int sum=a+b+c+d+e;
	int average=sum/5;
	return average;
}
//end of sum

//star of squear
int squear(int a)
{
	int square=a*a;
	return square;
	
}
int cube(int a)
{

	int cube=a*a*a;
	return cube;

}
//end of squear

//start of hours
void hours(double min, int sec)
{
	
	
	int hours=min/60;
	min=min*60+min;
	sec=min *60+sec;
	printf("hours=%d minutes=%d seconde=%d \n",hours,min,sec);
}
// ends of hours

//start of peri
int peri(int len,int width)
{
	int perimeter=2*(len+width);
	return perimeter;
}
//ends the peri

