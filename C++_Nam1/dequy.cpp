#include<iostream>
using namespace std;
int giaithua(int n)
{
	if(n==0 or n==1)
	{
		return 1;
	}
	else 
		return n*giaithua(n-1);
}
int main()
{
	int n;cin>>n;
	cout<<giaithua(n);
	return 0;
}
