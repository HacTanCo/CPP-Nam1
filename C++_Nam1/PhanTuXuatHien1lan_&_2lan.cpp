#include <iostream>
using namespace std;
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main() 
{
	// phan tu xuat hien dung 2 lan
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int dem=0;
	sort(arr,n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1]) dem++;
		else
		{
			if(dem==1)
			{
				cout<<"Phan tu xuat hien dung 2 lan la: "<<arr[i]<<endl;
			}
			dem=0;
		}
	}
	if (dem==1) 
	{
      	cout<<arr[n - 1];
   	}
	return 0;
}
//1. sap xep mang theo thu tu tang dan
//2. duyet qua mang va kiem tra neu phan
//tu hien tai bang phan tu tiep theo thi tang bien dem len 1
//3. neu bien dem =1 , in phan tu do ra
//4. sau do,dat lai bien dem=0 va tiep tuc duyet mang


//#include<iostream>
//using namespace std;
//int main()
//{
 	// phan tu xuat hien duy nhat(xuat hien 1 lan)
//	int n;cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//	bool laplai=false;
//	for(int i=0;i<n;i++)
//	{
//		int dem=0;
//		for(int j=0;j<n;j++)
//		{
//			if(arr[i]==arr[j]) dem++;
//		}
//		if(dem==1)
//		{
//			laplai=true;
//			cout<<"Phan tu duy nhat la: "<<arr[i]<<endl;
//		}
//	}
//	if(laplai=false)
//	cout<<"Khong co phan tu duy nhat";
//}


