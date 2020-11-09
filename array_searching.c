#include<stdio.h>
int main()
{
	int a[100], n, i, search, flag, pos;
	printf("How many elements : ");
	scanf("%d", &n);
	printf("Enter elements into the array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("What nuber do you want to search for : ");
	scanf("%d", &search);
	for(i=0; i<n; i++)
	{
		flag=0;
		if(a[i]==search)
		{
			flag=1;
			pos=i+1;
			//break;
		}
	}
	if(flag==1)
	{
		printf("Element found at position : %d\n", pos);
	}
	return 0;
}
