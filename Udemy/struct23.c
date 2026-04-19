//WAP for accessing union members
#include<stdio.h>
union Student
{
    int marks;
    char grade;
    float per;
};
int main()
{
    union Student s1;
    s1.marks=89;
    printf("Marks =%d\n",s1.marks);
    s1.grade='A';
    printf("Grade =%c\n",s1.grade);
    s1.per=89.5;
    printf("Percentage =%f\n",s1.per);

    return 0;
}
