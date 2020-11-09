#include<stdio.h>
#include<string.h>

int main()
{
    char str[ ] = "Modify This String To Upper";
    printf("%s\n", str);

    printf("%s\n", strupr(str));

    return 0;
}
