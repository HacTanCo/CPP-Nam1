#include<iostream>
using namespace std;
void nhapmang(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"A["<<i<<"]"<<"["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void xuatmang(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
int tongtrongmang(int a[][100],int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
	}
	return sum;
} 
int tongchantrongmang(int a[][100],int n,int m)
{
	int sumchan=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]%2==0) sumchan+=a[i][j];
		}
	}
	return sumchan;
	
} 
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
int tongsnttrongmang(int a[][100],int n,int m)
{
	int sumsnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if( checksnt(a[i][j])==1 ) 
			{
				sumsnt+=a[i][j];
			}
		}
	}
	return sumsnt;
} 
void bubblesort(int a[][100],int n,int m)
{
	for(int i=0;i<n*m;i++)
	{
		for(int j=0;j<m*n;j++)
		{
			if(a[i/n][i%n] < a[j/n][j%n])
			{
				int temp = a[i/n][i%n];
				a[i/n][i%n] = a[j/n][j%n];
				a[j/n][j%n] = temp;
			}
		}
	}
}
void inchisolonnhatdautien(int a[][100],int n,int m)
{
	int max,vitrii,vitrij;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-1;j>=0;j--)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
				vitrii=i;
				vitrij=j;
			}
		}	
	}
	cout<<"\nVi tri lon nhat cua phan tu dau tien: "<<vitrii<<vitrij<<endl;
}
void sumrow(int a[][100],int n,int m)
{
	int sumrow;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sumrow+=a[i][j];
		}
		cout<<sumrow<<" ";
		sumrow=0;
	}
}
int dongcotonglonnhat(int a[][100],int n,int m)
{
	int sumrow,maxrow,maxrowi;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sumrow+=a[i][j];
		}
		if(sumrow > maxrow)
		{
			maxrow = sumrow ;
			maxrowi = i;
			
		}
		sumrow=0;
	}
	return maxrowi;
}
void xoadongtrongmatran(int a[][100],int &n,int m,int vitridong)
{
	for(int i=vitridong;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=a[i+1][j];
		}
	}
	m--;
}
void xoacottrongmatran(int a[][100],int n,int &m,int vitricot)
{
	for(int i=0;i<n;i++)
	{
		for(int j=vitricot;j<m;j++)
		{
			a[i][j]=a[i][j+1];
		}
	}
	n--;
}
int tongtrenduongbien(int a[][100],int n,int m)
{
	int sum=0;
	for (int j = 0; j < m; j++) 
	{
    	sum += a[0][j];        // Hang dau tien
    	sum += a[n-1][j];      // Hang cuoi cung
	}
	for (int i = 1; i < n-1; i++) 
	{
    	sum += a[i][0];        // Cot dau tien
    	sum += a[i][m-1];      // Cot cuoi cung
	}
	return sum;
}
int main()
{
	int a[100][100],n,m;
	cin>>n>>m;
	nhapmang(a,n,m);
	cout<<"\nMatran sau khi nhap la!!!\n";
	xuatmang(a,n,m);
	cout<<"\nTong cua matran la: ";
	cout<<tongtrongmang(a,n,m)<<endl;
	cout<<"\nTong chan cua matran la: ";
	cout<<tongchantrongmang(a,n,m)<<endl;
	cout<<"\nTong SNT matran la: ";
	cout<<tongsnttrongmang(a,n,m)<<endl;
	bubblesort(a,n,m);
	cout<<"\nMang sau khi sap xep tang dan!!!\n";
	xuatmang(a,n,m);
	inchisolonnhatdautien(a,n,m);
	cout<<"\nTong cac phan tu nam tren mot dong: ";
	sumrow(a,n,m);cout<<endl;
	cout<<"\nDong co tong lon nhat la: ";
	cout<<dongcotonglonnhat(a,n,m)<<endl;
	cout<<"\nXoa dong!!!";
	int vtdong;
	cout<<"\nNhap vi tri dong can xoa: ";cin>>vtdong;
	xoadongtrongmatran(a,n,m,vtdong);
	xuatmang(a,n,m);
	cout<<"\nXoa cot!!!";
	int vtcot;
	cout<<"\nNhap vi tri cot can xoa: ";cin>>vtcot;
	xoacottrongmatran(a,n,m,vtcot);
	xuatmang(a,n,m);
	cout<<"\nTong trn duong bien la: "<<tongtrenduongbien(a,n,m)<<endl;
	
	
		
}
