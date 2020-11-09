#include<stdio.h>
int main()
{
	int a[100], n, i, search, max, min, pos1, pos2, sec_max, sec_min;
	printf("How many elements : ");
	scanf("%d", &n);
	printf("Enter elements into the array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	max=a[0];
	min=a[0];
	sec_max=a[0];
	sec_min=a[0];
	for(i=1; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			pos1=i+1;
		}
		if(a[i]<min)
		{
			min=a[i];
			pos2=i+1;
		}
	}
	printf("Maximum element is : %d, found at position %d\n", max, pos1);
	printf("Minimum element is : %d, found at position %d\n", min, pos2);
	for(i=1; i<n; i++)
	{
		if(a[i]>=sec_max && a[i]!=max)
		{
			sec_max=a[i];
			pos1=i+1;
		}
		if(a[i]<=sec_min && a[i]!=min)
		{
			sec_min=a[i];
			pos2=i+1;
		}
	}
	printf("Second maximum element is : %d, found at position %d\n", sec_max, pos1);
	printf("Second minimum element is : %d, found at position %d\n", sec_min, pos2);
	return 0;
}
