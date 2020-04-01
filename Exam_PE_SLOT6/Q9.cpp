#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,j,i=0;
	int arr[20];
	int sum = 0;
	scanf("%d",&n);

	while(n!=0)
	{
		arr[i] = n%10;
		i++;
		n/=10;
	}
	for(j=i; j>=0; j--)
	{
		if(j%2==0)
		{
			sum+=arr[j-1];
		}
	}

  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%d",sum);



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
