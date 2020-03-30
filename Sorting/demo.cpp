#include<stdio.h>
#include<conio.h>
#include<string.h>

struct HS
{
	char Hoten[30];
};
void Nhap(HS a[],int n)
{
	for(int i=0;i<n;i++)
	{
	  fflush(stdin);
	  printf("\nNhap ten: ");
	  gets(a[i].Hoten);
	}
}
void Sapxep(HS a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(strcmp(a[i].Hoten,a[j].Hoten)>0)
		  {
			HS k=a[i];
            a[i]=a[j];
            a[j]=k;
		  }
		}
	} 
}
void Xuat(HS a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n%s",a[i].Hoten);
	}
}
int main()
{
	HS a[100];
	int n=3;
	Nhap(a,n);
	Sapxep(a,n);
	Xuat(a,n);
	getch();

}
