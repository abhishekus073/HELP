// Implement bubble sort to sort a given array in c programming
#include<stdio.h>
#include<conio.h>
void main( ){
int n,i,j,temp,a[20],pos;
printf("Enter the number of items\n");
scanf("%d",&n);
printf("Enter the items to sort\n");
for(i=0;i<n;i++)
sacnf("%d",&a[i]);
for(i=0;i<n-1;i++){
pos=i;
for(j=i+1;j<n;j++){
if(a[j]<a[pos])
pos=j;
}
temp=a[pos];
a[pos]=a[i];
a[i]=temp;
}
printf("The sorted items are\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}