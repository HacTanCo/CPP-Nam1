#include<iostream>
#include<string.h>
using namespace std;
struct sinhvien
{
	char ten[30];
	int namsinh;
};

int main()
{
	sinhvien dssv[100],sv;
	int n;
	cout<<"Nhap so sinh vien: ";cin>>n;
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap du lieu cho sinh vien "<<i+1<<endl;
		cout<<"Ho ten: ";
		gets(dssv[i].ten);
		cout<<"Nam sinh: ";
		cin>>dssv[i].namsinh;
	}
	cout<<"\nDanh sach sinh vien!!\n";
	for(int i=0;i<n;i++)
	{
		if(dssv[i].namsinh==2000)
		cout<<dssv[i].ten<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp( dssv[i].ten,dssv[j].ten) >0 )
			{
				sv=dssv[i];
				dssv[i]=dssv[j];
				dssv[j]=sv;
			}
			
		}
	}
	cout<<"\nDanh sach sinh vien da sap xep la!!\n";
			for(int i=0;i<n;i++)
			{
				cout<<dssv[i].ten<<endl;
			}
}
