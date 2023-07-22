#include<iostream>
using namespace std;

void sobuoc(string s)
{
	int count=0;
	int n=s.length();
	for(int i=0;i<n/2;i++)
	{
		if( s[i] != s[n-i-1] )
		{
			count++;
		}
	}	
	cout<<count;
}

int kytudainhat(string s)
{
	int max=0,count=0,n=s.length();
	for(int i=0;i<n;i++)
	{
		if( isalpha(s[i]))
		{
			count++;
		}
		else
		{
			if(count>max) 
				{
					max=count;
				}
			count=0;
		}
	}
			
	if(count>max)
	{
		max=count;
	}
	return max;
}

int main()
{
	string s;
	while(getline(cin,s))
	{
		sobuoc(s); cout<<endl;
		//cout<<kytudainhat(s)<<endl;
	}
}

