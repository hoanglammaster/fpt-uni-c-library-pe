#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int prime(int n)
{
	if(n < 2){
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return n;
    }else{
        return 0;
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=a; i<=b;i++)
  	{
  		if(prime(i)!=0)
		  {
		  	printf("%d ",i);
			  }	
	  }






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
