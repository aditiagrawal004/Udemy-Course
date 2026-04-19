//WAP to raise a floating point number to a positive integer using Recursion
/*
a^n= a*a^n-1 when n>0 and 1 when n=0
*/
#include<stdio.h>
float power(float a,int n)
{
    if(n==0)
        return 1;
    else
        return(a*power(a,n-1));
}
int main()
{
    float a,p;
    int n;
    printf("Enter value of a and n: ");
    scanf("%f%d",&a,&n);
    p=power(a,n);
    printf("%f raise to power %d is %f",a,n,p);

    return 0;
}

