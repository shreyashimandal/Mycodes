#include<stdio.h>
#include<string.h>
int main()
{
	char names[10][100], temp[10][100];
	int i, j, n, a[100];
	printf("How many  names do you want to enter? \n");
	scanf("%d", &n);
	fflush(stdin);
	printf("Enter %d names : ", n);
	for(i=0; i<n; i++)
	{
		gets(names[i]);
	}
	//for(i=0; i<n; i++)
	//{
	//	a[i]=strlen(names[i]);
	//}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(strlen(names[i])>strlen(names[j]))
			{
				strcpy(temp[i],names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp[i]);
			}
		}
	}
	printf("The sorted name's list is : \n");
	for(i=0; i<n; i++)
	{
		printf("%s", names[i]);
		printf("\n");
	}
	return 0;
}
