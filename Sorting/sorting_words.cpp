#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[5][10];
	int i,j,check;
	char temp[10];
	for(i=0;i<5;i++){
		gets(str[i]);
	}
	for(i=0; i<5-1; i++)
	for(j=0; j<5-1; j++){
		check = strcmp(str[j],str[j+1]);
		if(check>0){
			strcpy(temp,str[j]);
			strcpy(str[j],str[j+1]);
			strcpy(str[j+1],temp);
		}
	}
	for(i=0;i<5;i++){
		printf("%s  ",str[i]);
	}
}
