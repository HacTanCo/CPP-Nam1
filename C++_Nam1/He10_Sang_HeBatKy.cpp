#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Nhap so muon chuyen doi: ";cin>>n;
    int b;
    cout<<"He co so muon chuyen doi(1<b<=36): ";cin>>b;
    char hecoso[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string gan;
    while(n>0)
    {
    	int chiso_of_hecoso;
    	chiso_of_hecoso=n%b;
    	gan=hecoso[chiso_of_hecoso]+gan;
    	n/=b;
	}
	cout<<gan;
}
