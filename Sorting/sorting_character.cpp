#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a,b) (a>b ? a:b)

int main()
{
	int n,i,j;
	char max;
	scanf("%d",&n);
	char str[n];
	fflush(stdin);
	scanf("%s",str);
	for(j=0; j<n-1; j++ )
	for(i=0; i<n-1; i++ )
	{
		max= MAX(str[i],str[i+1]);
		if(max==str[i]){
			str[i]=str[i+1];
			str[i+1]=max;
		}		
	}
	printf("\n sorting done:%s",str);
}
