#include<stdio.h>

int main()
{
	int a[50][100], row, col, i, j, max, min, p, q, pos1, pos2, pos3, pos4;
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
	printf("You want the maximum of which row: ");
	scanf("%d", &p);
	for(j=0;j<col;j++)
	{
		if(a[p][j]>max)
		{
			max=a[p][j];
			pos1= p+1;
			pos2=j+1;
		}
	}
	printf("Maximum value is : %d\n", max);
	printf("Position of maximum value is : row is : %d, column is : %d\n", pos1,pos2);
	printf("You want the minimum of which row: ");
	scanf("%d", &q);
	for(j=0;j<col;j++)
		{
			if(min>a[q][j])
			{
				min=a[q][j];
				pos3=q+1;
				pos4=j+1;			
			}
		}
	printf("Minimun value is : %d\n", min);
	printf("Position of minimum value is : row is : %d, column is : %d\n", q+1,pos4);
}
