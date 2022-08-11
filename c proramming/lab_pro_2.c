/* Program for solving quadratic equation*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main ( )
{
int a, b, c, d;
float x1, x2, real, img;
printf ("211301\n");
printf ("Enter three coefficients\n");
scanf ("%d%d%d", &a, &b, &c); //reading values for a,b,c
if (a * b * c == 0)//checking whether coefficients are zero
{
printf ("roots cannot be calculated\n");
exit (0);
}
d = b * b - 4 * a * c;//calculating discriminant value
if (d == 0)//checking whether discriminant value is equal to zero
{
printf ("roots are real and equal\n");
x1 = -b / (2 * a);
x2 = -b / (2 * a);
printf ("root1=%f\n", x1);
printf ("root2=%f\n", x2);
}
else if (d > 0)// checking whether discriminant value is positive
{
printf ("roots are real and distinct\n");
x1 = (-b + sqrt (d)) / (2 * a);
x2 = (-b - sqrt (d)) / (2 * a);
printf ("root1=%f\n", x1);
printf ("root2=%f\n", x2);
}
else// if discriminant value is negative
{
printf ("roots are complex and imaginary\n");
real = -b / (2 * a); //calculate real and imaginary roots
img = sqrt (fabs (d)) / (2 * a);
printf ("root1=%f+%fi\n", real, img);
printf ("root2=%f-%fi\n", real, img);
 }
}
