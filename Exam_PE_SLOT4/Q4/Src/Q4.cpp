#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int arr[5];
	int arr2[5];
	int i,k,j=0,temp;
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<5; i++)
	{
		if(arr[i]%2!=0)
		{
			arr2[j]=arr[i];
			j++;
		}
	}
	for(k=0;k<j-1;k++)
  	for(i=0;i<j-1;i++)
  	{
  		if(arr2[i]<arr2[i+1])
  		{
  			temp=arr2[i+1];
  			arr2[i+1]= arr2[i];
  			arr2[i]=temp;
		  }
	  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	for(i=0;i<j;i++)
		printf("%d ",arr2[i]);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
