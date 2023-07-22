//#include<iostream>
//using namespace std;
//void nhapmang(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//}
//void xuatmang(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//}
//void mangtangdan(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//void manggiamdan(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]<a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//int vitridautien(int a[],int n,int x)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==x)
//		{
//			cout<<"vi tri xuat hien dau tien la: "<<i;
//			break;
//		}
//	}
//}
//int tatcavitri(int a[],int n,int x)
//{
//	cout<<"Tat ca vi tri cua phan tu trong mang: ";
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==x)
//		{
//			cout<<i<<" ";
//		}
//	}
//}
//int main()
//{
//	int n;
//	cout<<"Nhap N: ";cin>>n;
//	int a[n];
//	nhapmang(a,n);
//	//1a
//	mangtangdan(a,n);
//	cout<<"Mang sau khi sap xep tang dan: ";
//	xuatmang(a,n);
//	cout<<endl;
//	//1b
//	manggiamdan(a,n);
//	cout<<"Mang sau khi sap xep giam dan: ";
//	xuatmang(a,n);
//	cout<<endl;
//	//1c
//	int y;
//	cout<<"Nhap gia tri can tim: ";cin>>y;
//	vitridautien(a,n,y);
//	//1d
//	int x;
//	cout<<"\nNhap gia tri can tim: ";cin>>x;
//	tatcavitri(a,n,x);
//	return 0;
//}



//#include<iostream>
//#include<string.h>
//using namespace std;
//void chuanhoakytutrangandviethoachudau(string str)
//{
//	while(str[0]==' ')
//	{
//		str.erase(0,1);
//	}
//	
//	while(str[str.length() - 1]==' ')
//	{
//		str.erase(str.length()-1 , 1);
//	}
//	
//	int i=0;
//	while(i<str.length())
//	{
//		if(str[i]==' ' and str[i+1]==' ')
//		{
//			str.erase(i,1);
//		}
//		else
//		{
//			i++;
//		}
//	}
//	
//	for(int i=0;i<str.length();i++)
//	{
//		str[i]=tolower(str[i]);
//	}
//	
//	for(int i=0;i<str.length();i++)
//	{
//		str[0]=toupper(str[0]);
//	}
//	for(int i=0;i<str.length();i++)
//	{
//		if(str[i]==' ')
//		{
//			str[i+1]=toupper(str[i+1]);
//		}
//	}
//		cout<<str<<endl;
//}
//int main()
//{
//	string s;
//	getline(cin,s);
//	chuanhoakytutrangandviethoachudau(s);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//long long F_dequy(int n)
//{
//	if(n==0) return 1;
//	if(n==1) return 1;
//	if(n>1) return F_dequy(n-1) + F_dequy(n-2);
//}
//long long F_khudequy(int n)
//{
//	long long f0=0,f1=1,fn=1;
//	if(n==0) return 0;
//	if(n==1) return 1;
//	for(int i=2;i<n;i++)
//	{
//		f0=f1;
//		f1=fn;
//		fn=f0+f1;
//	}
//	return fn;
//}
//int main()
//{
//	int n;cin>>n;
//	cout<<F_khudequy(n);
//
//}


#include <iostream>
using namespace std;
bool checksnt(int n) 
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==2) return true;
	else return false;
}
void F_nho_hon_N_la_SNT(int n) 
{
    int f0=1,f1=1,fn;
    while (f0<n) 
	{
        if( checksnt(f0) )
		{
            cout<<f0<<" ";
        }
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
}

int main() 
{
	int n;cin>>n;
	F_nho_hon_N_la_SNT(n);
    return 0;
}







