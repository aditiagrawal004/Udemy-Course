//WAP to print larger and smaller of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b) //a=10 b=16
        printf("larger number =%d and smaller =%d",a,b);
    else
        printf("larger number =%d and smaller =%d",b,a);


        return 0;
}

