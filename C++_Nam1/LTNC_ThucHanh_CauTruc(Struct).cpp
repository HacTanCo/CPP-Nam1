//				CAU 1
//#include <iostream>
//using namespace std;
//int main() 
//{
//    int n;
//    cout<<"Nhap so muon chuyen doi: ";cin>>n;
//    int b;
//    cout<<"He co so muon chuyen doi(1<b<=36): ";cin>>b;
//    char hecoso[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    string gan;
//    while(n>0)
//    {
//    	int chiso_of_hecoso;
//    	chiso_of_hecoso=n%b;
//    	gan=hecoso[chiso_of_hecoso]+gan;
//    	n/=b;
//	}
//	cout<<gan;
//}
//				CAU 2.A
//#include<iostream>
//using namespace std;
//void bubblesort(int a[],int n)
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
//int main()
//{
//	int n;cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//	bubblesort(arr,n);
//	int dem=0;
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==arr[i+1])
//		{
//			dem++;
//		}
//		else
//		{
//			if(dem==1)
//			{
//				cout<<"Phan tu xuat hien dung 2 lan la: "<<arr[i]<<endl;
//			}
//			dem=0;
//		}
//	}
//}
//				CAU 2.B
//#include<iostream>
//using namespace std;
//const int MAX_SIZE=100;
//int main()
//{
//	int n;cin>>n;
//	int arr[MAX_SIZE],dem[MAX_SIZE]={};//{} khoi tao ban dau = 0
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//
//	for(int i=0;i<n;i++)
//	{
//		dem[arr[i]]++;
//	}
//	cout<<"So lan xuat hien cua cac phan tu trong arr la!!!"<<endl;
//	for(int i=0;i<n;i++)
//	{
//		if(dem[arr[i]]>0)
//		{
//			cout<<arr[i]<<" xuat hien "<<dem[arr[i]]<<" lan"<<endl;
//			dem[arr[i]]=0;
//		}
//	}
//}
//				CAU 3
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//struct sinhvien
//{
//	char hoten[40];
//	int namsinh;	
//};
//int main()
//{
//	int n;cin>>n;
//	sinhvien dssv[n];
//	fflush(stdin);
//	for(int i=0;i<n;i++)
//	{
//		cout<<"Nhap Hoten: ";gets(dssv[i].hoten);
//		fflush(stdin);
//		cout<<"Nhap namsinh: ";cin>>dssv[i].namsinh;
//		fflush(stdin);
//		cout<<endl;
//	}
//	cout<<"Nhung sinh vien sinhnam 2k!\n";
//	for(int i=0;i<n;i++)
//	{
//		if(dssv[i].namsinh==2000)
//		{
//			cout<<dssv[i].hoten<<endl;
//		}
//	}
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(strcmp(dssv[i].hoten,dssv[j].hoten)>0)
//			{
//				sinhvien temp=dssv[i];
//				dssv[i]=dssv[j];
//				dssv[j]=temp;
//			}
//		}
//	}
//	cout<<"\nDanh sach sinhvien sau khi sort\n";
//	for(int i=0;i<n;i++)
//	{
//		cout<<dssv[i].hoten<<endl;
//	}
//}
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
struct thisinh
{
	char hoten[30];
	float toan,ly,hoa;	
};
int main()
{
	int n;
	cout << "Nhap so luong thi sinh: ";cin>>n;
	thisinh dssv[n];
	fflush(stdin);
	cout<<"\nDanh sach thi sinh!!!\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap hoten thi sinh thu "<<i+1<<": ";gets(dssv[i].hoten);
		if(strlen(dssv[i].hoten)==0)//sinh vien co ten rong thi dung lai
		{
			break;
		}
		else
		{
			cout<<"Nhap diem Toan: ";cin>>dssv[i].toan;
			cout<<"Nhap diem Ly: ";cin>>dssv[i].ly;
			cout<<"Nhap diem Hoa: ";cin>>dssv[i].hoa;
			cout<<endl;
			fflush(stdin) ;
		}
	}
	float diemchuan=18;
	cout<<"Danh sach trung tuyen!!!\n";
	for(int i=0;i<n;i++)
	{
		float diem3mon=dssv[i].toan+dssv[i].ly+dssv[i].hoa;
		if(diem3mon>=diemchuan and dssv[i].toan!=0 and dssv[i].ly!=0 and dssv[i].hoa!=0)
		{
			cout<<dssv[i].hoten<<endl;
		}
	}
	thisinh diemcaonhat = dssv[0];

    for (int i = 0; i < n; i++)
    {
        float tongdiemcaonhat = diemcaonhat.toan + diemcaonhat.ly + diemcaonhat.hoa;
        float diem3mon=dssv[i].toan+dssv[i].ly+dssv[i].hoa;

        if (diem3mon > tongdiemcaonhat && dssv[i].toan != 0 && dssv[i].ly != 0 && dssv[i].hoa != 0)
        {
            diemcaonhat = dssv[i];
        }
    }
    cout << "\nThu Khoa HUSC goi ten thi sinh: " <<diemcaonhat.hoten << endl;
    cout << "Toan: "<<diemcaonhat.toan<<";"<<" Ly: "<<diemcaonhat.ly<<";"<<" Hoa: "<<diemcaonhat.hoa;
	
}







