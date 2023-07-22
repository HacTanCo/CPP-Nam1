#include<iostream>
#include<stdio.h>
using namespace std;
struct sinhvien
{
	char hoten[30];
	char lop[10];
	float dtb;	
};
void nhapdssv(sinhvien a[],int n)
{
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap ho ten: ";gets(a[i].hoten);
		cout<<"nhap lop: ";gets(a[i].lop);
		cout<<"Nhap DTB: ";cin>>a[i].dtb;
		cout<<endl;
	}
}
void xuatdssv(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ho va ten: "<<a[i].hoten<<endl;
		cout<<"Hoc lop: "<<a[i].lop<<endl;
		cout<<"DTB: "<<a[i].dtb<<endl<<endl;
	}
}
void bubblesort(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].dtb < a[j].dtb)
			{
				sinhvien temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int n;cin>>n;
	sinhvien dssv[n];
	cout<<"Nhap du lieu cho sinh vien!!!\n";
	nhapdssv(dssv,n);
	cout<<"\n\nThong tin tat ca sinh vien sau khi nhap!!!\n";
	xuatdssv(dssv,n);
	cout<<"\nDanh sach sau khi sap xep DTB giam dan!!!\n";
	bubblesort(dssv,n);
	xuatdssv(dssv,n);
}
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//struct sinhvien
//{
//	char hoten[30];
//	char lop[10];
//	float dtb;	
//};
//void *nhapdssv(sinhvien *a[],int &n)
//{
//	fflush(stdin);
//	for(int i=0;i<n;i++)
//	{
//		a[i]=new sinhvien();
//		fflush(stdin);
//		cout<<"Nhap ho ten: ";gets(a[i]->hoten);
//		cout<<"nhap lop: ";gets(a[i]->lop);
//		cout<<"Nhap DTB: ";cin>>a[i]->dtb;
//		cout<<endl;
//	}
//}
//void *xuatdssv(sinhvien *a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<"Ho va ten: "<<a[i]->hoten<<endl;
//		cout<<"Hoc lop: "<<a[i]->lop<<endl;
//		cout<<"DTB: "<<a[i]->dtb<<endl<<endl;
//	}
//}
//void *bubblesort(sinhvien *a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]->dtb < a[j]->dtb)
//			{
//				sinhvien temp=*a[i];
//				*a[i]=*a[j];
//				*a[j]=temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;cin>>n;
//	sinhvien *dssv[n];
//	cout<<"Nhap du lieu cho sinh vien!!!\n";
//	nhapdssv(dssv,n);
//	cout<<"\n\nThong tin tat ca sinh vien sau khi nhap!!!\n";
//	xuatdssv(dssv,n);
//	cout<<"\nDanh sach sau khi sap xep DTB giam dan!!!\n";
//	bubblesort(dssv,n);
//	xuatdssv(dssv,n);
//}
//
//
//
//
//

