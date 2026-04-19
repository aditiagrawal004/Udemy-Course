//WAP to understand the concept of Pointer to Structure
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;

};
int main()
{
  struct student s1={"abc",123,45};
  struct student *p=&s1;
  printf("Name = %s\n",p->name);
  printf("RollNo = %d\n",p->rollno);
  printf("Marks = %d\n",p->marks);

}
