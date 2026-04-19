//WAP to pass Pointers to Structure as Arguments.
#include<stdio.h>
struct student{
    char name[10];
    int rollno;
    int marks;

};
void inc_marks(struct student *stu);
void display(struct student *s);
int main()
{
    struct student s1={"abc",34,89};
    struct student s2={"def",37,80};
    inc_marks(&s1);
    inc_marks(&s2);
    display(&s1);
    display(&s2);

    return 0;
}
void inc_marks(struct student *stu)
{
    (stu->marks)++;
}
void display(struct student *s)
{
    printf("Name =%s\n",s->name);
    printf("RollNo =%d\n",s->rollno);
    printf("Marks =%d\n",s->marks);

}
