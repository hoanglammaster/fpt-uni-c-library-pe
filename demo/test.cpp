#include<stdio.h>
#include<string.h>

void getArr(int arr[], int n)
{
	int i;
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);
}
void putArr(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%-2d",arr[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	getArr(arr,n);
	printf("++++++++++");
	putArr(arr,n);
	
}
