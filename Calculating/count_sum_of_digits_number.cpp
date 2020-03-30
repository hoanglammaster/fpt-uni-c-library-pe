#include<stdio.h>

int main()
{
	int n,j,i=0;
	int arr[20];
	int sum = 0;
	scanf("%d",&n);
	while(n!=0)
	{
		arr[i] = n%10;
		sum += arr[i];
		i++;
		n/=10;
	}
	printf("%d",arr[i-1]);
	for(j=i-2;j>=0;j--)
	{
		printf("+%d",arr[j]);
	}
	printf("=%d",sum);
	
}
