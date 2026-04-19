//WAP to find the factorial of a number
#include<stdio.h>
int main()
{
    int num,f;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial of %d is %d",num,f);


    return 0;
}
int fact(int n) //5! =5*4*3*2*1
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));

}

