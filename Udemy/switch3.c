//WAP to understand the switch control statement using break
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    switch(num) //1
    {
    case 1:
        printf("First \n");
        break;
    case 2:
        printf("Second \n");
        break;
    case 3:
        printf("Third \n");
        break;
    case 4:
        printf("Fourth \n");
        break;
    default:
        printf("Wrong choice and enter number between 1-4:");
    }
    return 0;
}
