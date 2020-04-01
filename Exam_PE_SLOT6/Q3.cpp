#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a,b) (a<b ? a:b)

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
		printf("%d ",arr[i]);
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
  int i,k,max,j=0,n = 5;
  int arr[n]={7,1,2,4,3};
  int arr2[n];
 // enter(arr,n);
  for(i=0; i<n; i++)
  {
  	if(arr[i]%2==0)
  	{
  		arr2[j]=arr[i];
  		j++;
	  }
  }
  for(k=0;k<j-1;k++)
	for(i=0;i<j-1;i++)
	{
		max=MAX(arr2[i],arr2[i+1]);
		if(arr2[i]==max){
			arr2[i]=arr2[i+1];
			arr2[i+1]=max;
		}
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	display(arr2,j);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
