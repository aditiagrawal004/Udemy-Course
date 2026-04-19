//String Varibles
#include<stdio.h>
int main()
{
    //char str[]={'F','a','i','s','a','l','\0'};
    char str[]="Faisal";
    for(int i=0;str[i]!='\0';i++)
    {

        printf("CHacter =%c\t",str[i]);
        printf("Address =%p\n",&str[i]);

    }
    return 0;
}
