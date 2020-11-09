#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string : \n");
	gets(str);
	strupr(str);
	printf("%c.", str[0]);
	for(i=1; i<strlen(str); i++)
	{
		if(str[i]==' ')
		{
			printf("%c.", str[++i]);	
		}
	}
	return 0;
}
