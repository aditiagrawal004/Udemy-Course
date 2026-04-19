//WAP to multiply two positive numbers without using * operator
#include<stdio.h>
int main()
{
    int a,b,i;
    int res=0;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
        res=res+a;
    printf("%d * %d =%d",a,b,res);


    return 0;
}

