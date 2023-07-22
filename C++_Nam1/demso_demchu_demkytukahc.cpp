#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	// char la chuoi ky tu nen use gets();
	char st[100];
	cout<<"Nhap mot chuoi ky tu: ";
	gets(st);
	int demchu=0, demso=0, kytukhac=0;
	for (int i=0; i<strlen(st); i++)
	{
		if (isalpha(st[i]))
		{
			demchu++;//dem chu cai
		}
	
		else if (isdigit(st[i]))
		{
			demso++;//dem so
		}
		else
		{
			kytukhac++;//dem may cai ky tu khac
		}
	}
	cout<<"\nSo ky tu chu cai: "<<demchu<<endl;
	cout<<"\nSo ky tu chu so: "<<demso<<endl;
	cout<<"\nSo ky tu khac: "<<kytukhac<<endl;
	return 0;
}
