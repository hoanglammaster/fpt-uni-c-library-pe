#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
	return abs(a*b)/gcd(a,b);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	a = abs(a);
	b = abs(b);
	printf("%d\n",gcd(a,b));
	printf("%d",lcm(a,b));
}
