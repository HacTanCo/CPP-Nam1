#include<iostream>
#include<math.h>
using namespace std;
int checksnt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==2) return 1;
	else return 0;
}
int sumsnt(int *p,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if( checksnt(*(p+i))==1 )
		{
			sum+=*(p+i);
		}
	}
	return sum;
}
int checkscp(int n)
{
	int s=sqrt(n);
	if(s*s==n) return 1;
	else return 0;
}
int sumscp(int *p,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(checkscp(*(p+i))==1)
		{
			sum+=*(p+i);
		}
	}
	return sum;
}
int main()
{
	int *arr,n;cin>>n;
	arr = new int [n];
	for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"]= ";
		cin>>*(arr+i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(arr+i)<<" ";
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)<0)
		{
			sum+=*(arr+i);
		}
	}
	cout<<endl<<sum<<endl;
	cout<<"SumSNT "<<sumsnt(arr,n)<<endl;
	cout<<"SumSCP "<<sumscp(arr,n)<<endl;
	delete [] arr;
	return 0;
	
	
}
