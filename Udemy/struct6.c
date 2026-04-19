//WAP to display the values of structure members
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stu1={"Faisal",234,89.67};
    struct student stu2,stu3;
    printf("Enter marks, rollno: ");
    scanf("%f%d",&stu3.marks,&stu3.rollno);
    printf("Marks= %f and Rollno=%d",stu3.marks,stu3.rollno);

    /*stu2.marks=23.4;
    printf("Marks= %.2f",stu2.marks);
    printf("Name =%s\n",stu1.name);
    printf("Age =%d\n",stu1.rollno);
    printf("Marks =%f",stu1.marks);*/
    return 0;
}


