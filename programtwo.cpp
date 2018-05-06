#include<stdio.h>  //To check entered number is armstrong or not
main()
{
<<<<<<< HEAD
int n,a,b,c,d,s;
printf("Enter your number");
=======
intn,a,b,c,d,s;
printf("Enter your number--");
>>>>>>> 681074270cbf6d74dd3cd864f0bcc9f55a446749
scanf("%d",&n);
  a=n%10;
  b=n/10;
  c=b%10;
  d=b/10;
  s=(a*a*a)+(c*c*c)+(d*d*d);
if(s==n)
printf("\nIt is an armstrong");
else
printf("\nIt is not an armstrong");
   }
