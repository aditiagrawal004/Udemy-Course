//WAP to enter any string and print its reverse order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int len;
    printf("Enter any string: ");
    scanf("%s",str);
    len=strlen(str)-1;
    while(len>=0){
        printf("%c",str[len]);
        len--;
    }

    return 0;
}

