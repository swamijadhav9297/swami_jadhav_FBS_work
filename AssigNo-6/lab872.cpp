#include<stdio.h>
void add(int ,int ,int );
void area();
void radius();
void temp();
void sum();
void squear();
void hours();
void peri();
void main()
{
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	add(a,b,c);
	
	
	area();	
	radius();
	temp();
	sum();
	squear();
	hours();
	peri();
}
// addition start
void add(int a,int b,int c)
{
	int a,b,c;
	 a=10;
	 b=20;
	
	 c=a+b;
	printf("addition of two integers %d \n", c);
}
//end of addition

// start of area
void area()
{
 int a,area;
 a=5;
 area=3.14*5*5;
 printf("the area is %d", area);
}
// end of area

// start of radius
void radius()
{
	int radius=10;
	int area;
	area=3.14*radius;
	printf("arrea of circle is %d \n",area);
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
void sum()
{
	int a,b,c,d,e,sum,average;
	a=10;
	b=20;
	c=30;
	d=40;
	e=50;
	
	sum=a+b+c+d+e;
	average=sum/5;
	printf("the average %d \n",average);
}
//end of sum

//star of squear
void squear()
{
	int a, square, cube;
	a=10;
	square=a*a;
	printf("the square is %d \n",square);
	cube=a*a*a;
	printf("the cube is %d \n",cube);

}
//end of squear

//start of hours
void hours()
{
	int hours;
	int min=180;
	int sec=25;
	hours=min/60;
	min=min*60+min;
	sec=min *60+sec;
	printf("hours=%d minutes %d seconde= %d \n",hours,min,sec);
}
// ends of hours

//start of peri
void peri()
{
	int len=4;
	int width=8;
	int perimeter=2*(len+width);
	printf("perimeter of ractangle is %d \n",perimeter);
}
//ends the peri

