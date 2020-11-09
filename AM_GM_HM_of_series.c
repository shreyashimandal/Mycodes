#include<stdio.h>
#include<math.h>
int main()
{
	int a[100], i, sum=0, multi=1, num1;
	float  AM , GM , HM ,num, sum1=0;
	printf("Enter how many number you want in the series : ");
	scanf("%f", &num);
	num1=num;
	printf("Enter the values in the series : ");
	for(i=0;i<num;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+a[i];
		multi=multi*a[i];
		sum1=sum1+1.0/(a[i]);
	}
	//printf("%d", sum1);
	AM =sum/num;
	GM =sqrt(multi);
	HM =num1/sum1;
	printf("Arithmetic mean of the series is %f\n", AM );
	printf("Geometric mean of the series is %f\n", GM );
	printf("Harmonic mean of the series is %f", HM );
	return 0;
}
