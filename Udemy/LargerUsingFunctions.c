//WAP that finds the larger of two numbers
#include<stdio.h>
int max(int x,int y);
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("Maximum of %d and %d is %d",a,b,max(a,b));


    return 0;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}


