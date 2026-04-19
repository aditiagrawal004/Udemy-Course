//WAP to accept any string and count number of words in it
#include<stdio.h>
#include<string.h>
int main()
{
    char line[100];
    int count=0,i=0;
    printf("Enter the line of text: ");
    gets(line); //apple banana cherry
    while(line[i]!='\0'){
        if(line[i]==32)
            count++;
        i++;
             }
             if(line[i]=='\0')
                count++;
printf("The number of words in line =%d",count);
    return 0;
}

