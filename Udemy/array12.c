//WAP to find the transpose of matrix
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int mat[ROW][COL],mat1[COL][ROW],i,j;
    printf("Enter the matrix mat(%d x %d) row-wise: \n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat[i][j]);
    for(i=0;i<COL;i++)
        for(j=0;j<ROW;j++)
            mat1[i][j]=mat[j][i];
            printf("After transpose the matrix the result is : \n");
for(i=0;i<COL;i++)
        {
        for(j=0;j<ROW;j++)
            printf("%d ",mat1[i][j]);
            printf("\n");
        }
    return 0;
}
