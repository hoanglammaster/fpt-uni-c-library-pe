#include<stdio.h>
#include<string.h>

void enter(int arr[], int n)
{
	int i;
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);
}
void display(int arr[], int n)
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
	enter(arr,n);
	display(arr,n);
	
}
