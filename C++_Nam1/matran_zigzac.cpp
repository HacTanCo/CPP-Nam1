#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int A[n+1][n+1];
	int dem=1;
	for (int i=1;i<=n;i++)
	{
		if (i%2!=1)
		{
			for (int j=1;j<=n;j++)
			{
				A[i][j]=dem;
				dem++;
			}
		}
		else
		{
			for (int j=n;j>=1;j--)
			{
				A[i][j]=dem;
				dem++;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cout<<A[i][j]<<" ";
		}
	cout<<"\n";
	}
	int tong=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{	
			if (i==j) tong+=A[i][j];
		}
	}
	cout<<tong<<"\n";
}
