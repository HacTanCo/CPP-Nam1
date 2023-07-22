//#include <iostream>
//using namespace std;
//int main() 
//{
//    int n;cin>>n;
//    int a[n][n];
//    int sum=0;
//    for(int i=0;i<n;i++) 
//	{
//        for(int j=0;j<n;j++) 
//		{
//            cin>>a[i][j];
//        }
//    }
//    for(int i=0;i<n;i++) 
//	{
//        sum+=a[i][i];
//        sum+=a[i][n-i-1];
//    }
//    if (n%2!=0) 
//	{
//        int giua=n/2;
//        sum-=a[giua][giua];
//    }
//	cout<<sum;
//
//    return 0;
//}
#include<iostream>
using namespace std;
struct node
{
	string masv;
	float dtb;
	node *next;
};
node *head=NULL;
node *taonode(string masv,float dtb)
{
	node *team=new node();
	team->masv=masv;
	team->dtb=dtb;
	team->next=NULL;
	return team;
}

void InsertFirst(node *&head, string masv, float dtb )
{
	node *t=taonode(masv,dtb);
	if(head==NULL)
	{
		head=t;
	}
	else
	{
		t->next=head;
		head=t;
	}
}
void Delete(node *&head, string masv)
{
    if (head == NULL) 
	{
        return;
    }
    if (head->masv == masv) 
	{
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node *sau = head;
    node *truoc = head->next;
    while (truoc != NULL) 
	{
        if (truoc->masv == masv) 
		{
            sau->next = truoc->next;
            delete truoc;
            return;
        }
        sau=truoc;
        truoc=truoc->next;
    }
}

int Count(node*head, float dtb)
{
	int dem = 0;
	node *temp = head;
    while(temp != NULL)
	{
    	if(temp->dtb>=dtb)
    	{
    		dem++;	
		}
        temp = temp->next;
    }
    return dem;
}
int main()
{
	string label;
	string msv;float avg;
	while(true)
	{	
		cin>>label;
		if (label=="Add") 
		{
            cin>>msv>>avg;
            InsertFirst(head,msv,avg);
        }
		if(label=="Del")
		{
			cin>>msv;
			Delete(head,msv);
		}
		if(label=="Count")
		{
			cin>>avg;
			cout<<Count(head,avg)<<endl;
		}
		if(label=="Fin")
		{
			break;
		}
	}
}



