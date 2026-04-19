//WAP to understand the strcat( ) function
#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    astrcat(str1,str2);
    /*printf("First string : %s \t Second string : %s\n",str1,str2);
    strcat(str1,"_Banana");
    printf("Now first string is %s",str1);*/
    return 0;
}
void astrcat(char str1[],char str2[])
{
    int i=0,j=0;//apple
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("After concat string = %s",str1);
}
