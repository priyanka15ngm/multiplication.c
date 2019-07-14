#include<stdio.h>
void main()
{
    int A[3][2],B[2][3],R[3][3];
    int i,j,k,sum;
    printf("enter the elements for matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {       
        scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elements for matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {       
        scanf("%d",&B[i][j]);
        }
    }
   
   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {       
            for(k=0;k<2;k++)
            {
            sum=sum+A[i][k]*B[k][j];
            }
            R[i][j]=sum;
            sum=0;
           
        }
    }
    printf("the matrix after multiplication:\n");
   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {       
        printf("%d\t",R[i][j]);
        }
    printf("\n");
    }
   
   
   

}

