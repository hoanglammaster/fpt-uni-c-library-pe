#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a,b) (a>b ? a:b)
struct Number
{
	int value;
	int index=0;
}number[7];

void enter(int arr[], int n)
{
	int i;
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//	int c;
//	scanf("%d", &c);
	int i,j,n=7,max=0,check=0;	
	int arr[7];
	enter(arr,n);
	for(i=0; i<n; i++)
		number[i].value=arr[i];
	for(i=0; i<n; i++)
	{
		if(arr[i]%2!=0){
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
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
//	printf("%d 0x", c); //@STUDENT: EDIT THIS LINE TO HAVE DESIRED OUTPUT

	if(check==0){
		printf("No odd number.");
	}
	else{
	for(i=0; i<n; i++)
	{
		if(number[i].index==max)
			printf("%d ",number[i].value);
	}
}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
