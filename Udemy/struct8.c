//WAP to to show that members of structure are stored in consecutive memory locations
#include<stdio.h>
struct student{
    char name[10];
    int rollno;
    float marks;
};
int main()
{
    struct student s1;
    printf("Address of Name= %u\n",s1.name);
    printf("Address of Rollno= %u\n",&s1.rollno);
    printf("Address of Marks= %u",&s1.marks);

    return 0;
}
