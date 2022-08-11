/*Program to search the element using binary search*/
#include<stdio.h>
void main( )

{
    printf ("211301\n");
int i, first, last, middle, n, key, array[100],found=0;

printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter array integers in ascending order:\n");
for (i = 0; i < n; i++)
{
scanf("%d",&array[i]);
 }
printf("Enter the key element:\n");
scanf("%d", &key);
first = 0;
last = n - 1;
while (first <= last && !found)
{
middle = (first+last)/2;
if (key == array[middle])
{
found=1;
}
else if (key >array[middle] )
 {
first = middle + 1;
 }
else
 {
last = middle - 1;
 }
}
if(found == 1)
{
printf("Key %d found at location %d.\n", key, middle+1);
 }
else
 {
printf("Key Not found!");
 }
}
