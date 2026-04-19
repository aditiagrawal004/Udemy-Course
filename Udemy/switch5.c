//WAP to check whether the alphabet is a vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Alphabet is Vowel \n");
        break;
    default:
        printf("Alphabet is consonant");

    }




    return 0;
}

