#include<stdio.h>

#define MAX(a,b) (a>b ? a:b)

int main()
{
	int n =5;
	int i,j,max;
	int arr[5];
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
		
	for(j=0;j<n-1;j++)
	for(i=0;i<n-1;i++)
	{
		max=MAX(arr[i],arr[i+1]);
		if(arr[i]==max){
			arr[i]=arr[i+1];
			arr[i+1]=max;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

