#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct doanhnghiep
{
	char madn[30];
	char giamdoc[30];
	float vondieule;
	int sonhanvien;	
};
void nhap1dn( doanhnghiep &dn)
{
	cout<<"MaDN: ";
	fflush(stdin);
	gets(dn.madn);
	cout<<"Giam Doc: ";
	fflush(stdin);
	gets(dn.giamdoc);
	cout<<"Von Dieu Le: ";
	cin>>dn.vondieule;
	cout<<"So Nhan Vien: ";
	cin>>dn.sonhanvien;
	cout<<endl;
}
void xuat1dn( doanhnghiep dn)
{
	cout<<"MaDN: "<<dn.madn<<endl;
	cout<<"Giam Doc: "<<dn.giamdoc<<endl;
	cout<<"Von Dieu Le: "<<dn.vondieule<<endl;
	cout<<"So Nhan Vien: "<<dn.sonhanvien<<endl;
	cout<<endl;
}
void nhap1ds(doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap1dn(ds[i]);
	}
}
void xuat1ds(doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat1dn(ds[i]);
	}
}
void sort(doanhnghiep ds[],int n)
{
	doanhnghiep temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].vondieule>ds[j].vondieule)
			{
				temp=ds[i];
				ds[i]=ds[j];
				ds[j]=temp;
			}
		}
	}
}
void indn(doanhnghiep dn)
{
	cout<<"MaDN: "<<dn.madn<<endl;
	cout<<"So Nhan Vien: "<<dn.sonhanvien<<endl;
}
void inmadn(doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(ds[i].sonhanvien and ds[i].madn[0]=='D' and ds[i].madn[1]=='N')
		{
			indn(ds[i]);
		}
	}
}
int kiemtradaucach(char madn[])
{
	for(int i=0;i<strlen(madn );i++)
	{
		if(madn[i]==' ')
		return 1;
	}
	return 0;
}
void demkhonghople(doanhnghiep ds[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ds[i].vondieule<10 or kiemtradaucach(ds[i].madn)==1)
		dem++;
	}
	cout<<"So Doanh Nghiep Khong Hop Le: "<<dem<<endl;
}
int main()
{
	int n;
	cout<<"Nhap N: ";
	cin>>n;
	cout<<endl;
	doanhnghiep dsdn[n];
	nhap1ds(dsdn,n);
	cout<<"Danh sach sau khi nhap: "<<endl;
	xuat1ds(dsdn,n);
	sort(dsdn,n);
	cout<<"Danh sach sau khi sap xep: "<<endl;
	xuat1ds(dsdn,n);
	cout<<"Doanh nghiep tren 300nv va MaDN bat dau bang 'D' va 'N'"<<endl;
	inmadn(dsdn,n);
	demkhonghople(dsdn,n);
}
