//WAP to to generate the Fibonacci series using Recursion
/*
0 1 1 2 3 5 8 12 .......
*/
#include<stdio.h>
int main()
{
    int term,i;
    printf("Enter the terms: ");
    scanf("%d",&term);
    for(i=0;i<term;i++)
        printf("%d ",fib(i));
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return(fib(n-1)+fib(n-2));
}
