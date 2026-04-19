//WAP for addition of two matrix
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j;
    printf("Enter the matrix mat1(%d x %d) row-wise: \n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat1[i][j]);
    printf("Enter the matrix mat2(%d x %d) row-wise: \n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat2[i][j]);
    //Addition
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        mat3[i][j]=mat1[i][j]+mat2[i][j];

   //Display
   printf("The resultant matrix is \n");
   for(i=0;i<ROW;i++)
   {
       for(j=0;j<COL;j++)
        printf("%d ",mat3[i][j]);
       printf("\n");
   }

    return 0;
}
