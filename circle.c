#include<stdio.h>
void main()
{
	float rad,area,perimeter;
	printf("enter the value of rad ");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	printf("the area of the given radius %f is %f\n",rad,area);
	perimeter=2*3.14*rad;
	printf("the perimeter of the given radius %f is %f",rad,perimeter);
	
}
