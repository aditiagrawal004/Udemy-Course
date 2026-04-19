//WAP to search for an item in the array
#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE]={12,45,67,34,65};
    int item,i;
    printf("Enter the element to be searched: ");
    scanf("%d",&item);
    for(i=0;i<SIZE;i++)
    {
        if(item==arr[i]){
            printf("Item %d found at position %d",item,i+1);
            break;
        }
    }
    if(i==SIZE)
        printf("Item %d not found",item);


    return 0;
}
