#include<iostream>
#include<string.h>
using namespace std;
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int timkiem(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return 1;
		}
	}
	return 0;
}
void chen(int a[],int &n,int vitricanchen,int socanchen)
{
	for(int i=n;i>=vitricanchen;i--)
	{
		a[i]=a[i-1];
	}	
	a[vitricanchen]=socanchen;
	n++;
}
void xoa(int a[],int &n,int vtxoa)
{
	for(int i=vtxoa;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void xoasochan(int a[],int &n)
{
	for(int i=0;i<n;)
	{
		if(a[i]%2==0)
		{
			xoa(a,n,i);
		}
		else 
		{
			i++;
		}
	}
}
int main()
{
	int vt,vtcanxoa,vitrixoa,scc;
	int n;cout<<"Nhap so phan tu cua mang: ";cin>>n;
	int a[n];
	
	cout<<"XOA PHAN TU CHAN TRONG MANG\n\n";
	nhapmang(a,n);
	cout<<"Mang sau khi nhap: ";
	xuatmang(a,n);
	xoasochan(a,n);
	cout<<"Mang sau khi xoa cac phan tu chan: ";
	xuatmang(a,n);
	
	
	cout<<"\n\nXOA TRONG MANG\n\n";
	cout<<"Nhap so phan tu cua mang: ";cin>>n;
	nhapmang(a,n);
	cout<<"Nhap vi tri can xoa trong mang: ";
	cin>>vtcanxoa;
	while(vtcanxoa>n)
	{
		cout<<"nhap lai: ";
		cin>>vtcanxoa;
	}
	xoa(a,n,vtcanxoa);
	cout<<"Mang sau khi xoa: ";
	xuatmang(a,n);
	
	
	cout<<"\n\nCHEN SO CHAN TRONG MANG\n\n";
	cout<<"Nhap so phan tu cua mang: ";cin>>n;
	nhapmang(a,n);
	cout<<"Nhap vi tri chen: ";
	cin>>vt;
	while(vt>n)
	{
		cout<<"Nhap lai: ";
		cin>>vt;
	}
	cout<<"Nhap gia tri can chen: ";
	cin>>scc;
	chen(a,n,vt,scc);
	cout<<"Mang sau khi chen: ";
	xuatmang(a,n);
	return 0;
}
