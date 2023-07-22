#include<iostream>
using namespace std;
int main()
//				CAU 1
/*{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=INT_MIN,dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]== max)
		{
			dem++;
		}
	}
	cout<<"Co tat ca "<<dem<<" phan tu lon nhat!!!\n";
	for(int i=0;i<n;i++)
	{
		if(max==a[i])
		{
			cout<<a[i]<<" o vi tri "<<i<<endl;
		}
	}
}*/

{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bool laplai=false;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]) dem++;			
		}
		if(dem==1)
		{
			cout<<"Phan tu duy nhat la: "<<a[i]<<endl;
			laplai=true;
		}
	}
	if(laplai==false)
	{
		cout<<"Khong tim thay phan tu duy nhat!!!";
	}
}

//{
//	int n,m;cin>>n>>m;
//	int a[n][m];
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cin>>a[n][m];
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			if(a[i][j]==1)
//			{
//				a[i+1][j+1]=1;
//			}
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}



