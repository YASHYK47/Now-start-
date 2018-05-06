#include<stdio.h>  //To check entered number is armstrong or not
void main()
{
intn,a,b,c,d,s;
printf("Enter your number");
scanf("%d",&n);
  a=n%10;
  b=n/10;
  c=b%10;
  d=b/10;
  s=(a*a*a)+(c*c*c)+(d*d*d);
if(s==n)
printf("It is an armstrong");
else
printf("It is not an armstrong");
   }
