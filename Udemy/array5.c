//WAP to pass whole 1-D Array to a function.
//WAP to that uses a general function that works on array of different sizes
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[7]={1,2,3,4,5,6,7};
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum of elements of array a=%d\n",add(a,5));
    printf("Sum of elements of array b=%d\n",add(b,7));
    printf("Sum of elements of array c=%d",add(c,10));

    return 0;
}
int add(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    return sum;
}
