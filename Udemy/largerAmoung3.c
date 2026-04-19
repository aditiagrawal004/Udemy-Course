//WAP larger among three numbers
#include<stdio.h>
int main()
{
    int a,b,c,large;
    printf("enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
     if(a>b) // a=3 b=5 c =6
     {
         if(a>c)
            large=a;
         else
             large=c;

     }
     else
     {
         if(b>c)
            large=b;
         else
            large=c;
     }
     printf("largest number is %d",large);


    return 0;
}
