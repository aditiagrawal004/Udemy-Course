//WAP to create a menu driven program using infinite loop and switch
/*
1. Create database
2. Insert new records
3. Modify a record
4. Delete a record
5. Display a record
6. exit
*/
#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
       printf("1. Create database \n");
       printf("2. Insert new records \n");
       printf("3. Modify a record \n");
       printf("4. Delete a record \n");
       printf("5. Display a record \n");
       printf("6. exit \n\n");

       printf("Enter your choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:
        printf("Database Created........\n");
        break;
       case 2:
        printf("Record Inserted........\n");
        break;
       case 3:
        printf("Record modified.......\n");
        break;
       case 4:
        printf("Record deleted........\n");
        break;
       case 5:
        printf("Records displayed......\n");
        break;
       case 6:
        exit(1);
       default:
        printf("Wrong choice...!");
       }
    }

    return 0;
}
