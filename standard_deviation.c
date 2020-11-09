#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],i,sum=0;
	float mean,num,res,final,sum1=0,sum2=0,val;
	printf("Enter how many numbers you want in the series : ");
	scanf("%f", &num);
	printf("Enter the values in the series : ");
	for(i=0; i<num; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/num;
	/*printf("sum= %d\n", sum);
	printf("mean = %f\n", mean);*/
	for(i=0; i<num; i++)
	{
		if(a[i]>mean)
		{
			sum1=sum1+ pow((a[i] - mean),2);
		}
		else
		{
			sum2=sum2+pow((mean-a[i]),2);
		}
	}
	/*printf("sum1 = %f\n", sum1);
	printf("sum2 = %f\n", sum2);*/
	val=sum1+sum2;
	//printf("%f\n", val);
	res=(sum1+sum2)/num;
	//printf("res = %f\n", res);
	final=sqrt(res);
	printf("The standard deviation of the series is : %f", final);
	return 0;
}
