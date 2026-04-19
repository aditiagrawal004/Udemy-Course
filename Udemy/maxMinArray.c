//WAP to find maximum and minimum number in an array
#include<stdio.h>
int main()
{
    int i,arr[5]={7,2,11,4,5};
    int min,max;
    min=max=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
 printf("Min= %d and Max = %d",min,max);

    return 0;
}
