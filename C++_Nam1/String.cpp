#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100],str1[100],str2[100];
	cout<<"Nhap chuoi: ";
	gets(str);
	cout<<"Do dai cua chuoi: ";
	cout<<strlen(str)<<endl;
	
	strcpy(str1,str);
	cout<<"Chuoi duoc coppy la: ";
	cout<<str1;
	
	cout<<"\nNhap chuoi de noi: ";
	gets(str2);
	strcat(str,str2);
	cout<<"Chuoi sau khi noi la: ";
	cout<<str;
	
	cout<<"\nNhap chuoi 1: ";
	gets(str);
	cout<<"Nhap chuoi 2: ";
	
	gets(str1);
		if(strcmp(str,str1)==0)
		cout<<"chuoi 1 = chuoi 2";
		if(strcmp(str,str1)>0)
		cout<<"chuoi 1 > chuoi 2";
		if(strcmp(str,str1)<0)
		cout<<"chuoi 1 < chuoi 2";
		
	cout<<"\nNhap chuoi: ";
	gets(str2);
	cout<<"Chuoi sau khi dao nguoc la: ";
	strrev(str2);
	cout<<str2;
	
	cout<<"\nNhap chuoi: ";
	gets(str);
	cout<<"Chuoi sau khi viet thuong: ";
	puts(strlwr(str));
	
	cout<<"Nhap chuoi: ";
	gets(str2);
	cout<<"Chuoi sau khi viet hoa: ";
	puts(strupr(str2));
	
	cout<<"Nhap chuoi: ";
	gets(str1);
	cout<<"Nhap ky tu can tim trong chuoi: ";
	gets(str2);
	strstr(str1,str2);
	if(strstr(str1,str2) != NULL)
	{
		cout<<"Tim thay trong chuoi va do la: "<<strstr(str1,str2);
	}
	else
	{
		cout<<"Khong tim thay trong chuoi!!";
	}

	return 0;
}
