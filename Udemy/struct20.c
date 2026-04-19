Program 15//WAP to Pass Array of Structures as Arguments
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    int marks;
};
void updateMarks(struct student sarr[]);
void display(struct student stu);
int main()
{
    struct student sarr[3]={{"abc",12,89},
                           {"def",13,79},
                           {"ghi",14,68}};
    updateMarks(sarr);
        display(sarr[0]);
        display(sarr[1]);
        display(sarr[2]);


    return 0;
}
void updateMarks(struct student sarr[])
{
    int i;
    for(i=0;i<3;i++)
    {
    sarr[i].marks=sarr[i].marks+10;
    sarr[i].rollno=sarr[i].rollno+1;
    }
}
void display(struct student stu)
{

    printf("Name =%s\t",stu.name);
    printf("RollNo =%d\t",stu.rollno);
    printf("Marks =%d\n",stu.marks);
}
