#include<iostream>
using namespace std;
int a[100][100];

void Nhapmatran(int a[][100], int m, int n){
	for ( int i =0; i<m; i++){
		for ( int j=0; j< n; j++){
			cout<<"a["<<i<<","<<j<<"]=";
			cin>>a[i][j];
		}
	}	
}

void Xuatmatran(int a[][100],int m, int n){
	for ( int i =0 ; i<m ; i++){
		for ( int j=0; j< n ; j++) {
			cout<<"a["<<i<<","<<j<<"]="<<a[i][j]<<"  ";
		}	
		cout<<endl	;	
	}
}

/*int tongchan(){
	int s=0;
	for ( int i =0 ; i<m ; i++){
		for ( int j=0; j< n ; j++) {
			if (a[i][j]%2==0)
			s+=a[i][j];
		}			
	}
	return s;
}*/

void sapxep(int x[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (x[i]>x[j]){
				int tg =x[i];
				x[i] = x[j];
				x[j] = tg;
			}
}

int main(){	
	int m = 2;
	int n = 3;
	int b[m*n];
	Nhapmatran(a,m, n);
	Xuatmatran(a, m, n);
	
	for(int i=0; i<m*n; i++)
		b[i] = a[i/n][i%n];
		
	sapxep(b, m*n);
	
	for(int i=0; i<m*n; i++)
		a[i/n][i%n] = b[i];
		
	Xuatmatran(a,m,n);
	
	return 0;
}

