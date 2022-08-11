/*Program to reverse a number and check whether its palindrome*/
#include<stdio.h>
main ( )
{
    printf ("211301\n");
int num, rem, temp, rev;
rev = 0;//initializing rev to zero

printf ("Enter the number\n");

scanf ("%d", &num);

temp = num; // assigning original number to temp variable
while (num != 0)
{
rem = num % 10; // process to reverse a number
rev = rev * 10 + rem;
num = num / 10;
}
printf ("The reverse of number is %d\n", rev);
if (temp == rev) //comparing the given number with its reverse
{
printf ("Number is palindrome\n");
}
else
{
printf ("Number is not palindrome\n");
}
}
