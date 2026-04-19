//WAP to pass whole 1-D Array to a function.
//WAP to understand the effect of passing an array to a function.
//WAP to find the sum of squares of all array elements.
#include<stdio.h>
#define SIZE 5
int main()
{
   int arr[SIZE]={1,2,3,4,5},i;
   fun(arr);
   for(i=0;i<SIZE;i++)
    {
      printf("%d ",arr[i]);
    }

    return 0;
}
void fun(int val[])
{
    int sum=0,i;
    for(i=0;i<SIZE;i++)
    {
        val[i]=val[i]*val[i];
        sum=sum+val[i];
    }
    printf("The sum of squares =%d\n",sum);
}
