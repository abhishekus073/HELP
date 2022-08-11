/*Program to check prime number*/
#include<stdio.h>
int isprime (int); //function declaration
 int main ( )
{
int n, res;
printf (" 211301\n");
printf ("enter the number\n");
scanf("%d",&n);
res= isprime(n);
if(res==1)
printf("the number %d is a prime number \n",n);
else
printf("the number %d is  not a prime number \n",n);
}
int isprime(int num) //function definition
{
int i;
for(i = 2;i <= num/2; i++)
{
if(num%i == 0) //checking for prime number
return 0;
}
return 1;
}
