#include<stdio.h>
int main()
{
	int i, j, num, temp, a[100], new1, pos;
	printf("How many number do you want in an array : ");
	scanf("%d", &num);
	printf("Enter the numbers in the array : ");
	for(i=0; i<num; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element you want to insert : ");
	scanf("%d", &new1);
	printf("At whaqt position do you want to enter it? : ");
	scanf("%d", &pos);
	for(i=num-1; i>pos; i--)
	{
		a[i+1]=a[i];
	}
	a[pos]= new1;
	for(i=0; i<=num; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
