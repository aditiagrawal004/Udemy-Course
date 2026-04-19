//WAP to count the digits in any number
#include<stdio.h>
int main()
{
   int n,count=0;
   printf("Enter a number: ");
   scanf("%d",&n);//12345
   do{
    n=n/10;
    count++;
   }while(n>0);
   printf("Number of digits=%d",count);


    return 0;
}
