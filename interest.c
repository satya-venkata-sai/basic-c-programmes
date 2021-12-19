#include<stdio.h>
void main()
{ 
   float principal,rateofinterest,time,finalamount;
   printf("enter the value of principal,time and rateofinterest");
   scanf("%f%f%f",&principal,&rateofinterest,&time);
   finalamount=principal*time*rateofinterest/100;
   printf("the final amount for given principal %f and for the interest of %f and the time is %f is %0.2f",principal,time,rateofinterest,finalamount);
}
