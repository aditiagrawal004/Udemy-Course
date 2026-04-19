//WAP to show the returning a Structure variable from function
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    int marks;
};
struct student change(struct student s);
void display(struct student stu);
int main()
{
    struct student s1={"mary",45,87};
    struct student s2={"hary",48,68};
    s1=change(s1);
    s2=change(s2);
    display(s1);
    display(s2);

    return 0;
}
struct student change(struct student s)
{
    s.marks=s.marks+15;
    s.rollno=s.rollno+2;
    return s;
};
void display(struct student stu)
{
    printf("Name %s\n",stu.name);
    printf("RollNo %d\n",stu.rollno);
    printf("Marks %d\n",stu.marks);

}
