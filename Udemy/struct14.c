//WAP to understand the concept of Pointer within Structure
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
    int *ptr;

};
int main()
{
  struct student s1,*p;
  *p->ptr;


}
