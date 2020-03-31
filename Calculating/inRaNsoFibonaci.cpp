#include<stdio.h>
#include<stdlib.h>
int i;
void fibonaci(int a,int b)
{	
	if(i>0)
	{
		printf("%d  ",b);
		int s = a;
		a = b;
		b = b + s;
		i--;
		fibonaci(a,b);
	}
}
int main()
{
	int a = 0;
	int b = 1;
	int num =20;
	i= num;
	fibonaci(a,b);
}
