//WAP to print the address and characters of a string using pointers
#include<stdio.h>
int main()
{
    char str[]="Faisal";
    char *p;
    p=str;
    while(*p!='\0')
    {
        printf("Charcater = %c\t",*p);
        printf("Address = %p\n",p);
        p++;
    }
    return 0;
}
