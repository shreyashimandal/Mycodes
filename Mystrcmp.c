#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100], n;
	printf("Please enter two strings : ");
	gets(str1);
	gets(str2);
	printf("str1= %s\n", str1);
	printf("str2= %s\n", str2);
	n=strcmp(str1,str2);
	if(n==0)
	{
		printf("The two strings are same");
	}
	else if(n>0)
	{
		printf("String1 appears alphabatically after string2");
	}
	else
	{
		printf("String1 appears alphabatucally before string2");
	}
	return 0;
}
