#include<iostream>
using namespace std;
#define f(a,b) for (int i=0;i<b;i++)
bool checkdx(string gan)
{
	for (int i=0;i<gan.size();i++)
	{
		if (gan[i]!=gan[gan.size()-i-1]) 
		{
			return false;
		}
	}
	return true;
}
int checkdx1(string gan)
{
	for (int i=0;i<gan.length();i++)
	{
		if (gan[i]!=gan[gan.length()-i-1]) 
		{
			return 0;
		}
	}
	return 1;
}
int main ()
/*
//				CAU 1
//input: matrix vuông
//output: matrix tam giac on/under
{
	int n;	
	cin>>n;
	int matrix[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"\ntam giac tren\n";
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(i<=j) cout<<matrix[i][j]<<" ";
			else cout<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\ntam giac duoi\n";
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(j<=i) cout<<matrix[i][j]<<" ";
			else cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}*/

/*
//				CAU 2.A
{
	int n,m;
	cout<<"Nhap so hang (ROW): ";cin>>n;
	cout<<"Nhap so cot(COLUMN): ";cin>>m;
	int matrix[n][m];
	cout<<"Nhap MATRIX "<<n<<" hang "<< m<<" cot : \n";
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"\nMATRIX sau khi nhap la!!!\n";
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"\nTong tren tung hang la!!!\n";
	int sumrow=0,maxrow=0;
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			sumrow+=matrix[i][j];
		}
		cout<<sumrow<<endl;
		if(maxrow<sumrow)
		{
			maxrow=sumrow;
		}
		sumrow=0;
	}
	cout<<"\nTong lon nhat tren hang la: "<<maxrow<<endl;
	cout<<"\nTong tren tung cot la!!!\n";
	int sumcol=0,maxcol=0;
	for( int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sumcol+=matrix[j][i];
		}
		cout<<sumcol<<endl;
		if(maxcol<sumcol)
		{
			maxcol=sumcol;
		}
		sumcol=0;
	}
	cout<<"\nTong lon nhat tren cot la: "<<maxcol<<endl;
	
	
	int max=0;
	if(maxcol < maxrow)
	{
		max = maxrow;
		cout<<"\nTong lon nhat tren hang hoac cot la: "<<max;
	}
	else
	{
		max = maxcol;
		cout<<"\nTong lon nhat tren hang hoac cot la: "<<max;
	}
}
*/
//				CAU 2.B
/*
{
	int n,m;
	cout<<"Nhap so hang (ROW): ";cin>>n;
	cout<<"Nhap so cot(COLUMN): ";cin>>m;
	int matrix[n][m];
	cout<<"Nhap MATRIX "<<n<<" hang "<< m<<" cot : \n";
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"\nMATRIX sau khi nhap la!!!\n";
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	
	int max,min,vitrimaxi,vitrimaxj,vitrimini,vitriminj;
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			if(max < matrix[i][j])
			{
				max = matrix[i][j];
				vitrimaxi=i;
				vitrimaxj=j;
			}
			
			if(min > matrix[i][j])
			{
				min = matrix[i][j];
				vitrimini=i;
				vitriminj=j;
			}
			
		}
			
	}
	cout<<"\nPhan tu lon nhat: "<<max;
	cout<<"\nVi tri phan tu lon nhat: "<<vitrimaxi<<vitrimaxj<<endl;
	cout<<"\nPhan tu be nhat: "<<min;
	cout<<"\nVi tri phan tu be nhat: "<<vitrimini<<vitriminj<<endl;
	
}*/
//		CAU 2.C
/*
{
		int n,m;
	cout<<"Nhap so hang (ROW): ";cin>>n;
	cout<<"Nhap so cot(COLUMN): ";cin>>m;
	int matrix[n][m];
	cout<<"Nhap MATRIX "<<n<<" hang "<< m<<" cot : \n";
	for( int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	
	for ( int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (matrix[i][j]<0) matrix[i][j]=-1;
			if (matrix[i][j]>0) matrix[i][j]=1;
		}
	}
	cout<<"\nMATRIX sau khi xu ly la\n";
	for ( int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<"\n";
	}
}*/
//				CAU 3	
/*			
{
	string s;
	getline(cin,s);
	string gan1;
	string gan2;
	
	for (int i=0;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	}
	
	//gan ky tu cua s vao bien gan1
	for (int i=0;i<s.length();i++)
	{
		if(s[i]>='a'and s[i]<='z')
		{
			gan1+=s[i];
		}
	}
	
		
	
	//use function int hay bool j cx dc
	int n=gan1.length();
	for (int i=0;i<n/2;i++)
	{
		if (gan1[i]!=gan1[n-i-1]) 
		{
			cout<<"Chuoi khong doi xung\n";
		}
	}
	cout<<"Chuoi doi xung\n";
	
	char kytucanxoa; cout<<"Nhap ky tu can xoa: ";  cin>>kytucanxoa;
	for (int i=0;i<s.length();i++)
	{
		if( s[i] != kytucanxoa ) 
		{
			gan2+=s[i];
		}
	}
	cout<<gan2;
}*/
//				CAU 4
{
	string s;
	getline(cin,s);
	s+=' ';
	int mx=0,cd=0;
	int k=s.size();
	f(0,k) 
	{
		if (s[i]!=' ') 
		{
			cd++;
		}
		else 
		{
			mx=max (mx,cd);
			cd=0;
		}
	}
	string gan;
	f(0,k)
	{
		if (s[i]!=' ') 
		{
			gan+=s[i];
		}
		if (s[i]==' ')
		{
			gan.clear();
		}
		if (gan.size()==mx)
		{
			cout<<gan<<" ["<<gan.size()<<"]"<<"\n";
		}
	}
}









