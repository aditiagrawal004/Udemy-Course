//WAP to print the sum of digits of any number.
#include<stdio.h>
int main()
{
    int n,sum=0,rem;//12345
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("Sum of digits of a number =%d",sum);



    return 0;
}
