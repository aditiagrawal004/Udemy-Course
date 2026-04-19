//WAP to perform arithmetic calculations on integers
#include<stdio.h>
int main()
{
    char op;
    int a,b;
    printf("Enter number operator and other number: ");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
    case '+':
        printf("Result =%d\n",a+b);
        break;
    case '-':
        printf("Result =%d\n",a-b);
        break;
    case '/':
        printf("Result =%d\n",a/b);
        break;
    case '*':
    case 'x':
    case 'X':
        printf("Result =%d\n",a*b);
        break;
    case '%':
        printf("Result =%d\n",a%b);
        break;
    default:
        printf("Enter valid operator.");

    }


    return 0;
}

