#include<stdio.h>
void main()
{
	int side,area,perimeter;
	printf("enter the side length of a square ");
	scanf("%d", &side);
	area=side*side;
	printf("area of a square with side %d is %d\n",side,area);
	perimeter=4*side;
	printf("perimenter of a square with side %d is %d",side,perimeter);
}
