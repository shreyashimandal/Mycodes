#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];
	printf("Please enter two strings : ");
	gets(str1);
	gets(str2);
	printf("str1= %s\n", str1);
	printf("str2= %s\n", str2);
	strcpy(str2,str1);
	printf("str1= %s\n", str1);
	printf("str2= %s", str2);
	return 0;
}
