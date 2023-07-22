#include<iostream>
using namespace std;

int main()
{
   int n, i;
   int arr[100];

   cout<<"Nhap so luong cac phan tu: ";
   cin>>n;

   for(i=0; i<n; i++)
   {
      cout<<"A[" <<i<< "]= ";
      cin>>arr[i];
   }

   for(i=1; i<n-1; ++i)
   {
      if(arr[i] == (arr[i-1]+arr[i+1]))
      {
         cout<<"Phan tu "<< i <<" co gia tri bang tong "<< i-1 <<" va "<< i+1<<endl;
      }
   }

   return 0;
}
