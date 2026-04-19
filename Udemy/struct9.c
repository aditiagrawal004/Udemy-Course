//Size of a Structure
#include<stdio.h>
struct student{
    char name;
    int num;

};
int main()
{
    int a;
    struct student s1;
    struct student s2;
    printf("Size of structure = %d",sizeof(s2));

    return 0;
}
