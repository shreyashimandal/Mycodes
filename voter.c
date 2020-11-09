#include<stdio.h>

int main()
{
	int count[100],i,j,num,k=0,l=0,m=0,n=0,o=0,p=0;
	printf("Enter the number of voters : \n");
	scanf("%d", &num);
	printf("Enter the voting numbers from 1 to 5 : \n");
	for(i=0; i<num; i++)
	{
			scanf("%d", &count[i]);
	}
	printf("The numbers entered by the voters : \n");
	for(i=0; i<num; i++)
	{
			printf("%d\n", count[i]);
	}
	for(i=0; i<num; i++)
	{
			if(count[i]==1)
			{
				l++;
			}
			else if(count[i]==2)
			{
				m++;
			}
			else if(count[i]==3)
			{
				n++;
			}
			else if(count[i]==4)
			{
				o++;
			}
			else if(count[i]==5)
			{
				p++;
			}
			else
			{
				k++;
			}
	}
	printf("The number of votes for 1st candidate is : %d\n", l);
	printf("The number of votes for 2nd candidate is : %d\n", m);
	printf("The number of votes for 3rd candidate is : %d\n", n);
	printf("The number of votes for 4th candidate is : %d\n", o);
	printf("The number of votes for 5th candidate is : %d\n", p);
	printf("The number of spoilt ballots is : %d", k);
	return 0;
}
