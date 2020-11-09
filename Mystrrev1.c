#include<stdio.h>

void mystrrev(char []); //function declaration or function prototype

int main()
{
	char str1[100];
	puts("Please enter a string\n");
	gets(str1);
	printf("\nstr1 = %s\n", str1);
	mystrrev(str1);
	printf("\nstr1 = %s\n", str1);
	return 0;
}

void mystrrev(char s1[])
{
	int i=0, len;
	char temp;
	while(s1[i]!='\0')
	{
		i++;
	}
	len=i;
	i=0;
	while (i < (len/2))
	{
    	temp = s1[i];
    	s1[i] = s1[len-i-1];
    	s1[len-i-1] = temp;
    	i++;
	}
}
