#include<stdio.h>
void mystrcpy(char [], char []); //function declaration or function prototype

int main()
{
	char str1[100], str2[100];
	puts("Please enter a string\n");
	gets(str1);
	puts("Please enter a string\n");
	gets(str2);
	printf("\nstr1 = %s, str2 = %s\n", str1, str2);
	mystrcpy(str1, str2);
	printf("\nstr1 = %s, str2 = %s\n", str1, str2);
	return 0;
}

void mystrcpy(char s1[], char s2[])
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';
}
