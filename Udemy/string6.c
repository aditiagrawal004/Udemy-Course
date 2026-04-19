//WAP to understand the strlen( ) function
#include<stdio.h>
#include<string.h>
int main()
{
    /*char str[30];
    int len;
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
    printf("Length of a string is : %d",len);*/
    char str[30];
    int len;
    printf("Enter the string: ");
    gets(str);
    printf("Length of a string is %d",astrlen(str));


    return 0;
}
int astrlen(char str[]){
 int i=0;
 while(str[i]!='\0'){
    i++;
 }
    return i;

}
