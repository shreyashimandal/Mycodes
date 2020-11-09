#include<stdio.h>
int main()
{
	int a[100][100], max, min, p, q, i, j, row, col, pos1, pos2, pos3, pos4;
	printf("Enter how many rows and columns you want : \n");
	scanf("%d%d", &row,&col);
	printf("Enter the values in the matrix : \n");
	for(i=0;i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix is : \n");
	for(i=0;i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	min=a[0][0];
	printf("Enter the column for which you want to find the maximum: ");
	scanf("%d", &p);
	for(i=0; i<row; i++)
	{
		if(a[i][p]>max)
		{
			max=a[i][p];
			pos1= i+1;
			pos2=p+1;
		}
	}
	printf("The maximum value is : %d\n", max);
	printf("The position of the maximum valus is- row: %d, column: %d\n", pos1, pos2);
	printf("Enter the column for which you want to find the minimum: ");
	scanf("%d", &q);
	for(i=0; i<row; i++)
	{
		if(min>a[i][q])
		{
			min=a[i][q];
			pos3= i+1;
			pos4=q+1;
		}
	}
	printf("The minimum value is : %d\n", max);
	printf("The position of the minimum valus is- row: %d, column: %d", pos3, pos4);
	return 0;
}
