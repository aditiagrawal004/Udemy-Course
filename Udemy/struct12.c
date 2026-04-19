//WAP to understand the concept of Structure within Structure
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    struct date d1;
    float marks;

}s1;
struct employee
{
    char name[20];
    int empid;
    struct date d1;

}e1;
struct date{
        int day;
        int month;
        int year;
    }d1;
int main()
{
    s1.d1.day=2;


    return 0;
}
