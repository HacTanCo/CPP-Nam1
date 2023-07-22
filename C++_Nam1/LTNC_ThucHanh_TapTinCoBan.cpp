//				CAU 1

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//void RANDOM(int n)
//{
//	srand(time(NULL));
//	for(int i=0;i<n;i++)
//	{
//		int random=1+rand()%100;
//		cout<<random<<" ";
//	}
//}
//void sortgiam(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]<a[j])
//			{
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//}
//void sorttang(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//}
//void nhap(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//}
//void xuat(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//}
//int main()
//{
//	int n;
//	cout<<"Nhap N: ";cin>>n;
//	cout<<"Ham sinh ngau nhien la: ";
//	RANDOM(n);
//	
//	int m;
//	cout<<"\nNHap M: ";cin>>m;
//	int a[m];
//	nhap(a,m);
//	cout<<"Mang sau khi nhap !!!\n";
//	xuat(a,m);
//	sorttang(a,m);
//	cout<<"\nMang sau khi sap xep tang dan !!!\n";
//	xuat(a,m);
//	sortgiam(a,m);
//	cout<<"\nMang sau khi sap xep giam dan !!!\n";
//	xuat(a,m);
//}


//				CAU 2
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//struct thuoc
//{
//	char namethuoc[20];
//	int nhh,slc,dg;
//};
//
//void nhap1dsthuoc(thuoc dst[],int n)
//{
//	fflush(stdin);
//	for(int i=0;i<n;i++)
//	{
//		fflush(stdin);
//		cout<<"Nhap ten thuoc: ";gets(dst[i].namethuoc);
//		if(strcmp(dst[i].namethuoc,"***")==0)
//		{
//			break;
//		}
//		cout<<"Nhap nam het han: ";cin>>dst[i].nhh;
//		cout<<"Nhap so luong con: ";cin>>dst[i].slc;
//		cout<<"Nhap don gia: ";cin>>dst[i].dg;
//		cout<<endl;
//	}
//}
//void xuat1dsthuoc(thuoc dst[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<"Ten thuoc: "<<dst[i].namethuoc<<endl;
//		cout<<"Nam het han: "<<dst[i].nhh<<endl;
//		cout<<"So luong con: "<<dst[i].slc<<endl;
//		cout<<"Don gia: "<<dst[i].dg<<endl<<endl;
//	}
//}
//void dsthethan(thuoc a[],int n,int hethan)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(a[i].nhh>=hethan)
//		{
//			cout<<a[i].namethuoc<<endl;
//		}
//	}
//}
//int tongtienthh(thuoc a[],int n,int hethan)
//{
//	int sum=0;
//	for(int i=0;i<n;i++)
//	{
//		if(a[i].nhh>=hethan)
//		{
//			sum = sum + (a[i].slc * a[i].dg);
//		}
//	}
//	return sum;
//}
//void xoathuochethan(thuoc a[], int &n,int hethan) 
//{
//    for(int i=0;i<n;i++)
//	{
//		if(a[i].nhh>=hethan)
//		{
//			for(int j=i;j<n-1;j++)
//			{
//				a[j] = a[j+1];
//			}
//			n--;
//			i--;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cout<<"Nhap so luong thuoc can nhap thong tin: ";cin>>n;cout<<endl;
//	thuoc dst[n];
//	nhap1dsthuoc(dst,n);
//	cout<<"----------------------------------";
//	cout<<"\nDANH SACH SAU KHI NHAP LA !!!\n\n";
//	xuat1dsthuoc(dst,n);
//	cout<<"----------------------------------";
//	int hethan;cout<<"\nNhap nam het han: ";cin>>hethan;
//	cout<<"----------------------------------";
//	cout<<"\nDANH SACH THUOC HET HAN LA: ";
//	dsthethan(dst,n,hethan);;
//	cout<<"----------------------------------";
//	cout<<"\nTong so tien cac thuoc het han la: ";
//	cout<<tongtienthh(dst,n,hethan)<<" VND\n";
//	xoathuochethan(dst,n,hethan);
//	cout<<"----------------------------------";
//    cout<<"\nDANH SACH SAU KHI XOA NHUNG THUOC HET HAN LA !!!\n";
//	xuat1dsthuoc(dst,n);
//}



//				CAU 3
#include<iostream>
#include<stdio.h>
using namespace std;
struct dabong
{
	char tendb[50];
	int sbt,sbl,std,stv;
};
void nhap(dabong a[],int n)
{
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap ten doi bong: ";gets(a[i].tendb);
		cout<<"Nhap so ban thang: ";cin>>a[i].sbt;
		cout<<"Nhap so ban thua: ";cin>>a[i].sbl;
		cout<<"Nhap so the vang: ";cin>>a[i].stv;
		cout<<"Nhap so the do: ";cin>>a[i].std;
		cout<<endl;
	}
}
void xuat(dabong a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ten doi bong: "<<a[i].tendb<<endl;
		cout<<"So ban thang: "<<a[i].sbt<<endl;
		cout<<"So ban thua: "<<a[i].sbl<<endl;
		cout<<"So the vang: "<<a[i].stv<<endl;
		cout<<"So the do: "<<a[i].std<<endl;
		cout<<endl;
	}
}
void sodiem(dabong dsdb[],int n)
{
	for(int i=0;i<n;i++)
	{
		int s;
		s= (dsdb[i].sbt*10) + (dsdb[i].sbl*(-5)) + (dsdb[i].std*(-5)) + (dsdb[i].stv*(-2)); 
		cout<<"Doi "<<dsdb[i].tendb<<" dat duoc "<<s<<" diem !!!"<<endl;
	}
}
int main()
{
	int n;cin>>n;cout<<"Giai co tat ca "<<n<<" doi !!!\n";
	cout<<"-----------------------------------";
	cout<<"\nNhap thong tin cho tung doi !!!\n\n";
	dabong dsdb[n];
	nhap(dsdb,n);
	cout<<"-----------------------------------";
	cout<<"\nDanh sach sau khi nhap !!!\n\n";
	xuat(dsdb,n);
	cout<<"-----------------------------------";
	cout<<"\nDanh sach thanh tich cua tung doi la !!!\n\n";
	sodiem(dsdb,n);
	
}








