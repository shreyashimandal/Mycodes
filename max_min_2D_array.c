#include<stdio.h>

int main()
{
	int a[50][100], row, col, i, j, max, min, pos1, pos2, pos3, pos4;
	printf("\nEnter the no. of rows and columns\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter values into matrix\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	printf("\nValues of the matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	max=a[0][0];
	min=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				pos1=i+1;
				pos2=j+1;			
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
				pos3=i+1;
				pos4=j+1;			
			}
		}
	}
	printf("Maximum value is : %d\n", max);
	printf("Minimun value is : %d\n", min);
	printf("Position of maximum value is : row is : %d, column is : %d\n", pos1,pos2);
	printf("Position of minimum value is : row is : %d, column is : %d\n", pos3,pos4);
}
