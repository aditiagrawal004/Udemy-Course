//WAP to understand array of structures
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    float marks;
};
int main()
{
    int i;
    struct student s1[3];
    for(i=0;i<3;i++){
        printf("Enter the details of %d name, rollno and marks: ",i+1);
        scanf("%s%d%f",s1[i].name,&s1[i].rollno,&s1[i].marks);
    }
    for(i=0;i<3;i++){
        printf("Name =%s\nRollno = %d\nMarks=%f\n",s1[i].name,s1[i].rollno,s1[i].marks);
    }


    return 0;
}
