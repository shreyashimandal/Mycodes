#include<stdio.h>
int main()
{
	char a[100], b[100];
	gets(a);
	strcpy(b,a);
	strrev(b);
	printf("%s", b);
	return 0;
}
