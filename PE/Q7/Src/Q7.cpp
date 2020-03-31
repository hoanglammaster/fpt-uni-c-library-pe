#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX(a,b) (a<b ? a:b)
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	char max;
	char str[100];
	
	fflush(stdin);
	scanf("%s",str);
	n=strlen(str);
	for(j=0; j<n-1; j++ )
	for(i=0; i<n-1; i++ )
	{
		max= MAX(str[i],str[i+1]);
		if(max==str[i]){
			str[i]=str[i+1];
			str[i+1]=max;
		}		
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s",str);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
