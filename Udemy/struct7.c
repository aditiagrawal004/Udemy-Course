//WAP to assign the structure variables to another structure variable
#include<stdio.h>
struct student{
 char name[20];
 int rollno;
 float marks

};
int main()
{
    struct student s1={"Faisal",123,98.4};
    struct student s2=s1;
    printf("Name = %s\n",s2.name);
    printf("Rollno = %d\n",s2.rollno);
    printf("Marks = %.2f",s2.marks);

    return 0;
}
