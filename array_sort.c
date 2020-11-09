#include<stdio.h>
int main()
{
	int n,i,j,a[100],temp;
	printf("Number of elements you want in the array : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the %dth value", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	printf("%d", a[1]);
	return 0;
}
