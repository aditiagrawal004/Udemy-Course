//WAP to understand the concept structure and Functions(Passing Member as Arguments)
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
void display(char name[],int rollno,int marks);
int main()
{
  struct student s1={"abc",1,45};
  display(s1.name,s1.rollno,s1.marks);
 return 0;

}
void display(char name[],int rollno,int marks){
  printf("Name = %s\n",name);
  printf("Rollno = %d\n",rollno);
  printf("Marks = %d\n",marks);

}
