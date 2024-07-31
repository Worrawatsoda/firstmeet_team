#include <stdio.h>
int main()
{
    int matrix[3][3] = {},i,j,temp;

    

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&matrix[i][j]);
        }
    }
    temp = matrix[0][0];

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matrix[i][j] > temp )
            {
                temp = matrix[i][j];
            }
        }
    }
   printf("The maximum value in the matrix is: %d",temp);
}