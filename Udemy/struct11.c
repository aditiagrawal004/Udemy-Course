//WAP to understand arrays within structures
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    int submarks[3];
};
int main()
{
    int i,j;
    struct student s1[3];
    for(i=0;i<3;i++){
        printf("Enter data of student %d\n:",i+1);
        printf("Enter name: ");
        scanf("%s",s1[i].name);
        printf("Enter rolno: ");
        scanf("%d",&s1[i].rollno);
        for(j=0;j<3;j++){
            printf("Enter marks for subject %d: ",j+1);
            scanf("%f",&s1[i].submarks[j]);
        }
    }
    for(i=0;i<3;i++){
        printf("Data of student %d\n:",i+1);
        printf("Name =%s\n",s1[i].name);
    printf("%d"\n,s1[i].rollno);
    for(j=0;j<3;j++){
            printf("marks for subject %d: \t",s1[i].submarks[j]);

        }
    }




    return 0;
}
