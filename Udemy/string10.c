//WAP to test whether the word is Pallindrome or Not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]; //abcdcbad
    int j,i=0,flag;
    printf("Enter the word: ");
    scanf("%s",str);
    j=strlen(str)-1;
    while(i<=j){
       if(str[i]==str[j])
            flag=1;

    else{
        flag=0;
        break;
    }
    i++;
    j--;


}
if(flag==1)
    printf("Word is pallindrome.");
else
    printf("Word if not pallindrome");
    return 0;
}

