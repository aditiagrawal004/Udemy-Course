//WAP to understand the strcmp( ) function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    if(astrcmp(str1,str2))
        printf("Strings are not same");
    else
        printf("Strings are same");

    /*if((strcmp(str1,str2))==0)
        printf("Strings are same");
    else
        printf("Strings are not same");*/
    return 0;
}
int astrcmp(char str1[],char str2 []){
 int i=0;
 while(str1[i]!='\0'&&str2[i]!='\0'&&str1[i]==str2[i])
    i++;
 if(str1[i]==str2[i])
    return 0;
 else
    return(str1[i]-str2[i]);

}
