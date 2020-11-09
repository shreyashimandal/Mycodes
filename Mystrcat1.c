#include<stdio.h>
void mystrcat(char [], char []); //function declaration or function prototype

int main()
{
	char str1[100], str2[100];
	puts("Please enter a string\n");
	gets(str1);
	fflush(stdin);
	puts("Please enter a string\n");
	gets(str2);
	printf("\nstr1 = %s, str2 = %s\n", str1, str2);
	mystrcat(str2, str1);
	printf("\nstr1 = %s, str2 = %s\n", str1, str2);
	return 0;
}

void mystrcat(char s1[], char s2[])
{
	int i=0,j=0;
	for(i=0; s1[i]!='\0'; i++);
	for(j=0; s2[j]!='\0'; j++, i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
}
