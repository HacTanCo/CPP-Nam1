#include<bits/stdc++.h>
#include<string.h>
using namespace std;
/*
	Câu 1
struct sinhvien
{
	char hoten[30];
	int namsinh;
};
int main()
{
	sinhvien dssv[100],sv;
	cout<<"Nhap so sinh vien: ";
	int n;cin>>n;
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap du lieu cho sinh vien "<<i+1<<endl;
		cout<<"Ho va ten: ";gets(dssv[i].hoten);
		cout<<"Nam sinh: ";cin>>dssv[i].namsinh;
	}
	cout<<"\nDanh sach sau khi nhap la sinh nam 2000 la:\n";
	for( int i=0;i<n;i++)
	{
		if(dssv[i].namsinh==2000)
		cout<<dssv[i].hoten<<endl;
	}	
	//use bubble sort
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(dssv[i].hoten, dssv[j].hoten) > 0 )
			{
				sv=dssv[i];
				dssv[i]=dssv[j];
				dssv[j]=sv;
			}
		}
	}
	cout<<"\nDanh sach sau khi sort!!\n";
			for(int i=0;i<n;i++)
			{
				cout<<dssv[i].hoten<<endl;
			}
}*/
/*
struct thisinh
{
	char hoten[30];
	float toan,ly,hoa;
};
int main()
{
	thisinh ds[100];
	cout<<"Nhap so sinh vien: ";
	int n;cin>>n;
	float diemchuan=18.5;
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap du lieu cho thi sinh "<<i+1<<endl;
		cout<<"Ho ten: ";gets(ds[i].hoten);
		cout<<"Nhap diem toan: ";cin>>ds[i].toan;
		cout<<"Nhap diem ly: ";cin>>ds[i].ly;
		cout<<"Nhap diem hoa: ";cin>>ds[i].hoa;
	}
	for(int i=0;i<n;i++)
	{
		if((ds[i].hoa!=0 && ds[i].ly!=0 && ds[i].toan!=0) and (ds[i].hoa+ds[i].ly+ds[i].toan) >= diemchuan)
		{
			cout<<ds[i].hoten<<endl;
		}
	}
	int max=ds[i].hoten;
	for(int i=0;i<n;i++)
	{
		float tongdiem;tongdiem=ds[i].hoa+ds[i].ly+ds[i].toan;
		if(max<tongdiem)
		max
	}

}*/
struct sinhvien
{
	char ten[30];
	struct dt
	{
		int t,l,h,s;
	};
};
int main()
{
	sinhvien ds[100],tk,sv;
	int n,k;
	float c;
	n=0;
	do
	{
		cout<<"\nNhap DL cho sv thu "<<n+1;
		cout<<"Ten SV: ";gets(ds[n].ten);
		if(strlen(ds[n].ten)==0)
		{
			break;
		}
		else
		{
			cout<<"Diem thi Toan Ly Hoa cua SV "<<ds[n].ten;
			printf("%d%d%d",&ds[n].dt.t,&ds[n].dt.l,&ds[n].dt.h);
			fflush(stdin);
			ds[n].dt.s=ds[n].dt.t+ds[n].dt.l+ds[n].dt.h;
			n++
		}
	}
	while(1);
	cout<<"\nDanh sach sinh vien!!!\n";
	cout<<"Ten sinh vien Toan Ly Hoa Tong 3 mon\n";
	for(int i=0;i<n;i++)
	{
	cout<<ds[i].ten<<" "<<ds[i].dt.t<<" "<<ds[i].dt.l<<" "<<ds[i].dt.h<<" "<<ds[i].dt.sum;
	}
	cout<<"\nDIem chuan: ";cin>>c;
	cout<<"\nDanh sach sv trung tuyen la!!!\n";
	for(int i=0;i<n;i++)
	{
		if( (ds[i].dt.s>=c) and (ds[i].dt.t*ds[i].dt.lds[i].dt.h >0) )
		{
			cout<<"\n"<<ds[i].ten;
		}
	}
	tk=ds[0];
	for(int i=0;i<n;i++)
	{
		if(ds[i].dt.s>tk.dt.s)
		{
			tk=ds[i];
		}
	}
	cout<<"\nTHU KHOA la: "<<tk.ten;
	cout<<"\nSo nguoi trung tuyen la: ";cin>>k;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].dt.s < ds[j].dt.s)
			{
				sv=ds[i];
				ds[i]=ds[j];
				ds[j]=sv;
			}
		}
	}
	while( (k>0) and (ds[k-1].dt.s==ds[k].dt.s) )
	k--;
	if(k>0)
	{
		cout<<"Diem chuan la: "<<ds[k-1].dt.s;
		cout<<"\nDSSV trung tuyen la!!!\n";
		for(int i=0;i<k;i++)
		{
			cout<<ds[i].ten<<endl;
		}
	}





}










