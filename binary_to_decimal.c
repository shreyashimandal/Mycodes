#include<stdio.h>
#include<math.h>
int main()
{
	int num,a[100],rem,i=0, sum=0; 
	printf("Enter a binary number : ");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem* pow(2,i);
		i++;
	}
	printf("%d", sum);
	return 0;
}
