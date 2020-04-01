#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void enter(int arr[], int n)
{
	int i;
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int check=0,n,i;
	scanf("%d",&n);
	int arr[n];
	enter(arr,n);
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
			check=1;
	}
	for(i=0; i<n; i++)
	{
		if(arr[i]!=arr[n-1-i])
			check=1;
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	if(check==0)
		printf("%d",1);
	else
		printf("%d",0);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
