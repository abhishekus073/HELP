// Program to implement Binary Search
#include<stdio.h>
#include<conio.h>
int search( int item, int a[ ], int n)
{
int low, high,key,mid;
low = 0; //Initialization
high = n-1; // Initialization
key=item;
while( low <= high )
{
mid = ( low + high ) / 2; // Find the mid-point
if ( key == a[mid] )
{
 // If item not found, return position
return mid;
}
 if( key < a[mid] )
 high = mid - 1; // Search left side
else
low = mid + 1; // Search right side
}
return -1; // Item not found
}

void main( ) {
 int i,item,a[10],n,pos;
 printf("Enter the size of an Array\n");
 scanf("%d",&n);
 printf("Enter the Array Elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("The Array Elements are\n");
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
 printf("Enter the Element to be searched\n");
 scanf("%d",&item);
 pos=search(item,a,n);
 if(pos==-1)
 printf("Item not found\n");
 else
 printf("Item found\n");
 getch( );
}