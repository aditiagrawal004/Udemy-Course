//How to Declare, Access and process Array
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[10];
    //read
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //display
    for(int i=0;i<10;i++)
        printf("%d",arr[i]);
    return 0;
}
