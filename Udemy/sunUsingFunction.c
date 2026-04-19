//WAP to find the sum of two numbers
#include<stdio.h>
int sum(int x,int y);
int main()
{
    int a,b,s;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("Sum of %d and %d is %d",a,b,s);


   return 0;
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}



