#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

void nhapxau(char *s){
	cout<<"nhap xau : ";
	gets(s);
}

void xuatxau(char *s){
	cout<<"xau vua nhap la : "<<s<<endl;
}

int dem(char *s, char ch){
	int d = 0;
	for(int i=0; i<strlen(s); i++)
		if (s[i] == ch)
			d++;
	return d;
}

void xoakitu(char *s, int vt){
	int n = strlen(s);
	for(int i = vt; i<n-1; i++)
		s[i] = s[i+1];
	s[n-1]='\0';
}

void xoakitutrangduthua(char *s){
	while(s[0] == ' ')
		xoakitu(s, 0);
		
	while(s[strlen(s)-1] == ' ')
		xoakitu(s, strlen(s)-1);
	
	for(int i=0; i<strlen(s); i++)
		if(s[i]==' '&& s[i+1]==' '){
			xoakitu(s,i);
			i--;
		}
}

void demkhoangtrang(char *s)
{
	int dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if( isspace(s[i]) )
		dem++;
	}
	cout<<"So khoang trang co trong xau  la: "<<dem;
}

void demsotu(char *s)
{
	int dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if( isalpha(s[i]) )
		dem++;
	}
	cout<<"So tu co trong xau  la: "<<dem;
}

int main()
{
	char s[1000];
	nhapxau(s);
	xuatxau(s);
	char ch;
	cout<<"nhap ky tu can dem: "; cin>>ch;
	cout<<"so lan xuat hien cua "<<ch<<" trong s: "<< dem(s, ch)<<endl;
	xoakitutrangduthua(s);
	cout<<"xau chuan hoa: "<<s<<endl;
	cout<<"do dai xau chuan hoa: "<<strlen(s)<<endl;
	demkhoangtrang(s);cout<<endl;
	demsotu(s);
	return 0;
}
