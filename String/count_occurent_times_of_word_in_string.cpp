#include<stdio.h>
#include<string.h>

int main()
{
	char str1[1000];
	char str2[1000][100];
	char str3[100];
	
	gets(str1);
	gets(str3);
	int i = 0,k=0,j;
	char  * ptr;
	ptr = strtok(str1,",.!?;-_ ");
	while(ptr!=NULL)
	{
		strcpy(str2[i],ptr);
		i++;
		ptr = strtok(NULL,",.!?;-_ ");
	}
	for(j=0; j<i; j++)
	{
		if(strcmp(str2[j],str3) == 0)
		{
			k++;
		}
	}
	printf("\n %d",k);
	
	
}
