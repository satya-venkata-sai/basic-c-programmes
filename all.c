#include<stdio.h>
void main()
{
	int num1,num2,sum,sub,pro,quotient,remainder;
	printf("enter any two numbers");
	scanf("%d%d",&num1,&num2);
	
	sum=num1+num2;
	printf("sum of %d and %d is %d\n",num1,num2,sum);
	
	sub=num1-num2;
	printf ("sub of %d and %d is %d\n",num1,num2,sub);
	
	pro=num1*num2;
	printf("product of %d and %d is %d\n",num1,num2,pro);
	
	quotient=num1/num2;
	printf("quotient of %d and %d is %d\n",num1,num2,quotient);
	
	remainder=num1%num2;
	printf("remainder of %d and %d is %d",num1,num2,remainder);
}
