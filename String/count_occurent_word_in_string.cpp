#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  char str1[1000];
  char str2[100];
  char *ptr;
  scanf("%[^\n]",str1);
  fflush(stdin);
  scanf("%[^\n]",str2);
  int k = 0;
  ptr = strstr (str1,str2);
  while (ptr!=NULL)
  {
    ptr=strstr(ptr+strlen(str2),str2);
    k++;
  }
  printf("%d",k);
  return 0;
}
