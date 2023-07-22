#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	char masv[10];
	char name[30];
	char sex[5];
	int tuoi;
	float diem;
};
void nhap1sv(student &sv)
{
	cout<<endl;
	fflush(stdin);
	gets(sv.masv);
	fflush(stdin);
	gets(sv.name);
	fflush(stdin);
	gets(sv.sex);
	cin>>sv.tuoi;
	cin>>sv.diem;
}
void xuat1sv(student sv)
{
	cout<<endl;
	cout<<sv.masv<<endl;
	cout<<sv.name<<endl;
	cout<<sv.sex<<endl;
	cout<<sv.tuoi<<endl;
	cout<<sv.diem<<endl;
}
void nhapdanhsach(student a[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap1sv(a[i]);
	}
}
void xuatdanhsach(student a[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat1sv(a[i]);
	}
}
int main()
{
	int n;cin>>n;
	student a[n];
	nhapdanhsach(a,n);
	xuatdanhsach(a,n);
	return 0;
}
