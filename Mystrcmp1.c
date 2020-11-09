#include<stdio.h>
int mystrcmp(char [], char []); //function declaration or function prototype

int main()
{
	char str1[100], str2[100];
	int n;
	puts("Please enter a string\n");
	gets(str1);
	puts("Please enter a string\n");
	gets(str2);
	printf("\nstr1 = %s, str2 = %s\n", str1, str2);
	n= mystrcmp(str1, str2);
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

int mystrcmp(char str1[], char str2[])
{
	int i=0;

	while(str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i])
	{
		i++;
	}
	return str1[i]-str2[i];
}
	

