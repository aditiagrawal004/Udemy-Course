//WAP to convert lowercase into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i=0;
    printf("Enter a string in lower case: ");
    scanf("%s",str);//apple
    while(str[i]!='\0'){
        str[i]=str[i]-32;
        i++;
    }
    printf("The uppercase string is : %s",str);
    return 0;
}

