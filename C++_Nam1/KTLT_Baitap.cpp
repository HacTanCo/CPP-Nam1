#include<iostream>
#include<math.h>
using namespace std;
int checksnt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==2) return 1;
	else return 0;
}

int F(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	if(n>1) return F(n-1) + F(n-2);
}
int L(int n)
{
	if(n==0) return 2;
	if(n==1) return 1;
	return L(n-1) + L(n-2);
}
void daonguoc_khongdequy(int n)
{
	if (n/10==0)
		cout<<n;
	else
		while(n>0)
		{
			cout<<n%10;
			n = n/10;
		}	
}

void daonguoc_dequy(int n)
{
	if (n/10==0)
		cout<<n;
	else
	{
		cout<<n%10;
		daonguoc_dequy(n/10);
	}
}
int main()
/*
  Bài 2: Nh?p vào m?t s? nguyên duong a và b. 
a. Li?t kê t?t c? các s? nguyên duong v?a chia h?t cho 3 v?a chia h?t cho 5 trong do?n [a, b]. 
b. Li?t kê s? nguyên t? trong do?n [a, b].

{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(i%3==0 and i%5==0)
		{
			cout<<endl<<"cac so %3==0 va %5==0 trong [a,b] la: "<<i;
		}
	}
	for(int i=a;i<=b;i++)
	{
		if(checksnt(i)==1)
		{
			cout<<endl<<"cac so nguyen to trong [a,b] la: "<<i;
		}
	}
}
*/
/*
	Câu 3A
{
	int n;cin>>n;
	float tong=0;
	for(float i=1;i<=n;i++)
	{
		tong+=i/(i+5);	
	}
	cout<<tong;
}*/
/*
	Câu 3B
{
	int n;cin>>n;
	float s=0;
	for(float i=1;i<=n;i++)
	{
		float a;
		a=i/pow(i*(i+1),2);
		s+=a;
	}
	cout<<s;
	
}*/
/* 
	Câu 4
{
	int n;cin>>n;
	cout<<F(n);
}*/
/*
{
	int n;cin>>n;
	for(int i=0;i<=n;i++)
	{
		cout<<L(i)<<" ";
	}
}*/

//	Câu 5
{
	int n;cin>>n;
	daonguoc_dequy(n);
	cout<<" ";
	daonguoc_khongdequy(n);
}





















