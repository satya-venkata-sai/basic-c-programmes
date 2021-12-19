#include<stdio.h>
void main()
{
	int time,x,min ;
	printf("enter the min ");
	scanf("%d",&x);
	time=x/60;
	min=x%60;
	printf("the time is %d hours and %d min ",time ,min);
}
