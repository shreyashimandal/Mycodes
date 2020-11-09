#include<stdio.h>
int main()
{
	int num, i, j, a[100], pos;
	printf("How many numbers you want in an array : ");
	scanf("%d", &num);
	printf("Enter the values in the array ");
	for(i=0; i<num; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position you want to delete from : ");
	scanf("%d", &pos);
	for(i=pos-1; i<num; i++)
	{
		a[i]=a[i+1];
	}
	printf("The final array after deletion is : ");
	for(i=0; i<num-1; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
