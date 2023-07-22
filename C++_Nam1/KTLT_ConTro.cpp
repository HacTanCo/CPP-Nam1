//tong hai so nguyen bang con tro
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,sum,*ptr1,*ptr2;
//	cout<<"Nhap a: ";cin>>a;
//	cout<<"Nhap b: ";cin>>b;
//	ptr1=&a;
//	ptr2=&b;
//	sum= *ptr1 + *ptr2;
//	cout<<"Ket qua la: "<<sum;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int *ptr1 = new int ;
//	int *ptr2 = new int ;
//	cin>>*ptr1>>*ptr2;
//	int sum= *ptr1 + *ptr2 ;
//	cout<<sum;
//}
//nhap mang va tong cua mang bang con tro
//#include<iostream>
//using namespace std;
//int main()
//{
//	int *arr,n;cin>>n;
//	arr=new int[n];
//	for(int i=0;i<n;i++)
//	{
//		cout<<"arr["<<i<<"]= ";
//		cin>>*(arr+i);
//	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<*(arr+i)<<"  ";
//	}
//	int sum=0;
//	for(int i=0;i<n;i++)
//	{
//		sum=sum+*(arr+i);
//	}
//	cout<<"\nTong La: "<<sum;
//}
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *hoten = new char [1001];
	gets(hoten);
	cout<<strlen(hoten)<<endl;
	string gan;
	for(int i=0;i<strlen(hoten);i++)
	{
		if(*hoten=' ')
		gan+=*(hoten+i);
		cout<<gan;
	}
	
	
}





