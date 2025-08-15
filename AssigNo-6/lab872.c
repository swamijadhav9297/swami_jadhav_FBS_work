#include<stdio.h>
void add(int ,int ,int );
void area10(int ,double );
void rad(int ,double );
void temp();
void suma(int ,int ,int ,int ,int ,int ,double );
void squear();
void hours();
void peri();
void main()
{
	int a,b,c;
	a=10;
	b=20;
	add(a,b,c);
	//
	int d,area;
	d=5;
	area10(d,area);	
	//
	int radius=10;
	double area2;
	rad(radius,area2);
	//
	temp();
	//
	int f,g,e,sum,average;
	f=30;
	g=40;
	e=50;
	suma(a,b,f,g,e,sum,average);
	squear();
	hours();
	peri();
}
// addition start
void add(int a,int b,int c)
{
    c=a+b;
	printf("addition of two integers %d \n", c);
}
//end of addition

// start of area
void area10(int a,double area)
{
	area=3.14*5*5;
 printf("the area is %d", area);
}
// end of area

// start of radius
void rad(int radius,double area2)
{
	area2=3.14*radius;
	printf("arrea of circle is %d \n",area2);
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
void suma(int a,int b,int f,int g,int e,int sum,double average)
{
	sum=a+b+f+g+e;
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

