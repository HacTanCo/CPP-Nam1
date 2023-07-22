#include<iostream>
using namespace std;
void cinarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"ARR["<<i<<"] = ";
		cin>>arr[i];
	}
}
void coutarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void bubblesort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so phan tu N: ";cin>>n;
	int a[n];
	cinarr(a,n);
	bubblesort(a,n);
	coutarr(a,n);
}
