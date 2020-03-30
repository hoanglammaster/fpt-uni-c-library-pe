#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*
===>int index = strlen(str);

===>strcat(str1, str2); concatenate:str2 will be copy to the end str1;

===>strcpy(str1, str2); will copy str2 to str1, str1 is deleted

===>int value = strcmp(str1, str2);  0-equal; negative-str1 less than str2; positive-str1 greater than str2;

===>char * ptr = strtok(str1, str2); str2 containing the delimiter character.Return a pointer to the first chatacter of the token.
	(The strtok function marks the end of the token by storing a null character in s1 just after the last character in the token.)
	example below: CTRL + F + Find in File : Label1

===>char * ptr = strstr(str1, str2); return a pointer to the first occurence str2 within the string pointed to by str1;
	(IF not pound, return NULL pointer)
	example below: CTRL + F + Find in File : Label2

===>char * ptr = strchr(str1, c); c is character; return a pointer to the first occurence c within the string pointed to by str1;
	(IF not pound, return NULL pointer)
	same strstr;

===>strlwr
===>strupr
===>strrev

*/

/*Label1
		strtok: example
int main()
{
	char str1[]="hoang van lam.pc_1427;he-140505";
	char str2[]=" .,/!;_-";
	char * ptr;
	ptr = strtok(str1,str2);
	while(ptr!=NULL)
	{
		printf("%s\n",ptr);
		//use can store values of ptr to an 2-dimensional arrays by strcpy
		//ex: strcpy(str[i],ptr);
		//i++;
		ptr = strtok(NULL,str2);
	}
}
*/
		
/*Label2
		strstr : example
int main()
{
	char str1[]="hoang lam hoang lam lam";
	char str2[]="lam";
	char * ptr;
	ptr = strstr(str1, str2);
	//ptr = "lam hoang lam";
	// apply to count occurrence times a words in string
	int count=0;
	while(ptr!=NULL)
	{
		ptr = strstr(ptr+strlen(str2),str2);
		count++;
	}
	printf("%d",count);
}
*/

