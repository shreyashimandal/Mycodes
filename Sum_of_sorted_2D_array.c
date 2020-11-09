#include<stdio.h>
int main()
{
	int A[100][100], B[100][100], i, j, k, C[100][100], row, col, temp1, temp2;
	printf("Enter how many rows and columns you want in the matrices : ");
	scanf("%d%d", &row, &col);
	printf("Enter the values in the first matrix : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("The first matrix is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the values in the second matrix : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("The first matrix is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			for(k=j+1; k<col; k++)
			{
				if(A[i][j]>A[i][k])
				{
					temp1=A[i][j];
					A[i][j]=A[i][k];
					A[i][k]=temp1;
				}
			}
		}
	}
	printf("The first sorted matrix is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			for(k=j+1; k<col; k++)
			{
				if(B[i][j]>B[i][k])
				{
					temp2=B[i][j];
					B[i][j]=B[i][k];
					B[i][k]=temp2;
				}
			}
		}
	}
	printf("The second sorted matrix is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			C[i][j]= A[i][j]+B[i][j];
		}
	}
	printf("The summation matrix is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
