//WAP to understand the concept structure and Functions(Passing structure variable)
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student);
int main()
{
  struct student s1={"abc",12,234};

  display(s1);
 return 0;

}
void display(struct student s1)
{
    printf("Name = %s\n",s1.name);
    printf("RolNo = %d\n",s1.rollno);
    printf("marks = %d\n",s1.marks);
}

