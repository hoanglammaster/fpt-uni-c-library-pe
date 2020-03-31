#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX(a,b) (a>b ? a:b)

void enter(int arr[], int n)
{
	int i;
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);
}

struct Number
{
	int value;
	int index=0;
}number[9];

int main()
{
	int i,j,n=9,max=0,check=0;
//	scanf("%d",&n);
	int arr[n]={6,6,6,2,1,1,4,5,3};
//	enter(arr,n);
	for(i=0; i<n; i++)
		number[i].value=arr[i];
	for(i=0; i<n; i++)
	{
		if(arr[i]>9&&arr[i]<100){
			check=1;
		for(j=i; j<n; j++)
		{
			if(arr[i]==arr[j])
				number[i].index++;
		}
		}
	}
	for(i=0; i<n; i++)
	{
		max = MAX(number[i].index,max);
	}
	if(check==0){
		printf("no two-digit number");
		exit(0);
	}
	for(i=0; i<n; i++)
	{
		if(number[i].index==max)
			printf("%-4d",number[i].value);
	}
}
