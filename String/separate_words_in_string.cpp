#include<stdio.h>
#include<string.h>
struct Word
{
	char words[20];
}word[100];
int main()
{
	char str1[100];
	gets(str1);
	char * ptr;
	int i=0;
	ptr = strtok(str1,"?!;,./-_ ");
	while(ptr!=NULL)
	{
		strcpy(word[i].words,ptr);
		i++;
		ptr = strtok(NULL,"?!;,./-_ ");
	}
	int j;
	for(j=0;j<i;j++)
	{
		printf("%s\n",word[j].words);
	}
	return 0;
}
