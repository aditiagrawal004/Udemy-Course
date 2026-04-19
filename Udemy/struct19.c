//WAP to show Returning a Pointer to Structure From a Function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[10];
    int rollno;
    int marks;
};
struct student *func();
void display(struct student *);
int main()
{
    struct student *sptr;
    sptr=func();
    display(sptr);

    return 0;
}
struct student *func()
{
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name,"Jenny");
    ptr->rollno=56;
    ptr->marks=79;
    return ptr;
};
void display(struct student *stu)
{
    printf("Name =%s\n",stu->name);
    printf("RollNo =%d\n",stu->rollno);
    printf("Marks =%d\n",stu->marks);
}
