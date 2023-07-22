#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
char *inhoachudau(char st[])
{
	strlwr(st); //ham doi chuoi ky tu sang chu thuong
	st[0]= toupper(st[0]);//doi ky tu dau tien sang chu hoa
	for (int i=1; i<strlen(st)-1; i++)
	if (st[i]==' ' && st[i+1] !=' ')
	st[i+1]= toupper(st[i+1]);
	return st;
}  

char TimKyTuTrongChuoi(char s[],char s2[])
{
	int dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==s2[0])
        {
        
            dem++;
        }
    }
    if(dem>=1)
    {
    	cout<<"So lan xuat hien: "<<dem;
    }
    else if(dem==0)
    {
        cout<<"Khong co trong chuoi";
    }
}
int main()

//			CAU 1:Kiem tra tinh doi xung;
//{
//	char str[100];
//	cout<<"Nhap chuoi: ";
//	gets(str);
//	int i,n=strlen(str);
//	for( i=0;i<n/2;i++)
//		if(str[i] != str[n-1-i])
//			break;
//		if(i==n/2)
//		cout<<"CHuoi vua nhap la doi xung!";
//		else
//		cout<<"Chuoi vua nhap la khong doi xung!";
//}

//				CAU 2:Tan suat xuat hien cua 1 ky tu;
//{
//    char s[50];
//   	char s2[10];
//    printf("Nhap chuoi: ");
//    gets(s);                                        
//    printf("Nhap ky tu muon tim: ");
//    gets(s2);
//    TimKyTuTrongChuoi(s,s2);
//} 

//				CAU 3:in ra chu viet hoa,chu viet thuong va viet hoa moi chu cai dau moi tu;
//{
//   	char s[100];
//   	cout<<"nhap chuoi: ";
//   	gets(s); 
//   	strupr(s);
//   	cout<<s<<endl;
//   	strlwr(s);
//   	cout<<s<<endl;
//    inhoachudau(s);
//    cout<<s<<endl;
//}

//				CAU 4: nhap danh sach sinh vien bang mang chuoi 2 chieu;
//{
//	char dssv[50][50];
//	int n;
//	cout<<"Tat ca so sinh vien co trong danh sach la: ";
//	cin>>n;
//	fflush(stdin);
//	for(int i=0;i<n;i++)
//	{
//		cout<<"Ten sinh vien thu "<<i<<" la: ";
//		gets(dssv[i]);
//	}
//	cout<<"Danh sach sau khi nhap la: \n";
//	for(int i=0;i<n;i++)
//	{
//		cout<<dssv[i]<<endl;
//	}		
//}

//				CAU 5.1: khong dung ham strrev();
//{
//	char s1[100];
//	cout<<"Nhap chuoi: ";
//	gets(s1);
//   	int len=strlen(s1);
//   	for(int i=0;i<len/2;i++)
//   	{
//   		char t=s1[i];
//   		s1[i]=s1[len-1-i];
//   		s1[len-1-i]=t;
//	}
//	cout<<"Chuoi sau khi dao la: "<<s1;
//}

//				CAU 5.2:duoc dung ham strrev();
{
	char str[100];
	cout<<"Nhap chuoi: ";
	gets(str);
	cout<<"Chuoi sau khi nhap la: ";
	strrev(str);
	puts(str);
}





