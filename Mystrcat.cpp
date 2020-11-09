#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100], str3[100];
	printf("Please enter two strings : ");
	gets(str1);
	gets(str2);
	printf("str1= %s\n", str1);
	printf("str2= %s\n", str2);
	strcat(str1,str2);
	printf("str1= %s\n", str1);
	printf("str2= %s\n", str2);
	printf("Enter another string : ");
	gets(str3);
	strcat(str1,str3);
	printf("str1= %s", str1);
	return 0;
}
