//Program to implement factorial of a number and to generate the Ackerman function using recursion.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int A(int p,int q)
{
    if(p==0)
        return q+1;
    else if(q==0)
        return A(p-1,1);
    else
        return A(p-1,A(p,q-1));
}
void main()
{
    int n,p,q,ch;
    while(1)
    {
        printf("1.Factorial\n2.Ackerman\n3.Exit\n");
        printf("Enter your Choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the Value for n:");
            scanf("%d",&n);
            printf("The Factorial of %d=%d\n",n,fact(n));
            break;
        case 2:
            printf("Enter the value for P and Q:");
            scanf("%d%d",&p,&q);
            printf("\nOutput of Ackerman Function::%d\n",A(p,q));
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid Choice");
            return;
        }
    }
}
