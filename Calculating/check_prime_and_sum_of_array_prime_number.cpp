#include <stdio.h>
#include <math.h>
//if n is prime number, this program will return n; if not return 0; 
int prime(int n)
{
	if(n < 2){
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return n;
    }else{
        return 0;
    }
}
 
int main(){
	int i,sum=0;
    int arr[13];
    for(i=0;i<13;i++)
    	scanf("%d",&arr[i]);
	for(i=0; i<13;i++)
	{
		sum+=prime(arr[i]);
	}
    printf("sum = %d",sum);
}
