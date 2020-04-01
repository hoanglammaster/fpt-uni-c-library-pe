#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int prime(int a)
{
	int i = 0;
	if(a<2)
		return 0;
	else if(a==2)
		return 1;
	else if(a==2)
		return 1;
	else
	{
		for(i=2; i<=sqrt(a); i++)
		{
			if(a%i==0)
				return 0;
		}
	}
	return 1;
}

int digit(int arr[], int n)
{	
	int i = 0;
	while(n!=0)
	{	
		arr[i]=n%10;
		i++;
		n/=10;
	}
	return i;
}
int main()
{
	int tc,s,n,j,i,k, temp, sum = 0;
	int arr[3];
	int arr2[100];
	do{
	system("cls");
	printf("TEST Q1 (4 marks):\n");
	printf("1. Run TC 1\n2. Run TC 2\n");
	printf("Enter TC (0 to exit):");
	scanf("%d",&tc);

	if(tc==1)
	{
		printf("Enter a = ");
		scanf("%d",&arr[0]);
		printf("Enter b = ");
		scanf("%d",&arr[1]);
		printf("Enter c = ");
		scanf("%d",&arr[2]);
		break;
	}
	else if(tc==2)
	{
		printf("Enter n = ");
		scanf("%d",&n);
		break;
	}
	else if(tc==0)
	{
		exit(0);
	}
	}while(1);	
printf("\nOUTPUT:\n");
if(tc==1)
{
	for(j=0;j<3-1;j++)
	for(i=0;i<3-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp =  arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	for(i=0; i<3; i++)
	{
		printf("%-2d",arr[i]);
	}
}
if(tc==2)
{
	
	k = digit(arr2,n);
	for(i=0; i< k ;i++)
	{
		if(prime(arr2[i])==1)
			sum+=arr2[i];
	}
	printf("%d",sum);
	
}
}
