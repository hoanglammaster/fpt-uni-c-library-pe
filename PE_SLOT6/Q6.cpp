#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	int i;
	int *freq;
	freq = (int*)calloc(26,sizeof(int));
	gets(str);
	int len = strlen(str);
	for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }

  

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<len;i++)
    {
  		if(str[i]>='a' && str[i]<='z')
  		{
  			if(freq[str[i]-97]==1)
  				printf("%c",str[i]);
		  }
		else if(str[i]>='A'&&str[i]<='Z')
		{
			if(freq[str[i]-65]==1)
				printf("%c",str[i]);
		}
	}

 
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
