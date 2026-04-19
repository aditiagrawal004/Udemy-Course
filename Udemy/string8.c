//WAP to understand the strcpy( ) function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];

    printf("Enter the second string: ");
    scanf("%s",str2);
    //astrcpy(str1,str2);
    astrcpy(str1,str2);
   /* printf("First string: %s \t Second string : %s\n",str1,str2);
    strcpy(str1,"India");
    strcpy(str2,"China");
    printf("First string: %s \t Second string : %s",str1,str2);*/
    return 0;
}
void astrcpy(char str1[],char str2[]){
  int i=0;
  while(str2[i]!='\0'){
    str1[i]=str2[i];
    i++;
  }
  str1[i]='\0';
  printf("str1 = %s",str1);
}
