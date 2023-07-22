#include<iostream>
using namespace std;
struct node 
{
	int data;
	node *next;	
};
node *head=NULL;
node *taonode(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void themdau(node *&head,int x)
{
	node *t=taonode(x);
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
void themcuoi(node *&head,int x)
{
	node *t=taonode(x);
	if(head==NULL)
	{
		head=t;
	}
	else
	{
		node *tam=head;
		while(tam->next!=NULL)
		{
			tam=tam->next;
		}
		tam->next=t;
	}
}
void themvitribatky(node *&head,int x,int vitri)
{
	node *temp=taonode(x);
	//dem cac phan tu trong DSLKD
	int dem=0;
	node *tamj=head;
	while(tamj != NULL)
	{
		dem++;
		tamj=tamj->next;
	}
	
	if(vitri>=1 and vitri<=dem)
	{
		//neu o vi tri dau tien
		if(vitri==1)
		{
			if(head==NULL)
			{
				head=tamj;
			}
			else
			{
				tamj->next=head;
				head=tamj;
			}
		}
		
		else
		{
			tamj=head;
			int i=1;
			while(tamj != NULL and i < vitri-1)
			{
				i++;
				tamj=tamj->next;
			}
			temp->next = tamj->next;
			tamj->next = temp;
		}
	}
	
	//them o vi tri cuoi cung
	else
	{
		themcuoi(head, x);
	} 
}
void xoadau(node *&head)
{
	if(head!=NULL)
	{
		head=head->next;
	}
}
void xoacuoi(node *&head)
{
	if(head==NULL)
	{
		return;
	}
	node *cuoi=head, *kecuoi=NULL;
	while(cuoi->next != NULL)
	{
		kecuoi=cuoi;
		cuoi=cuoi->next;
	}
	if(kecuoi == NULL)
	{
		head=NULL;
	}
	else
	{
		kecuoi->next=NULL;
	}
}
void  xoavitribatky(node *&head, int vitri)
{
	//dem tat ca cac nut co trong DSLKD
	int dem = 0;
	node *temp = head;
    while(temp != NULL)
	{
    	dem++;
        temp = temp->next;
    }
    
    
    if (vitri >= 1 && vitri <= dem)
	{
		//xoa vi tri dau tien trong DSLKD
    	if (vitri == 1)
    	{
    		head = head->next;
		}
		
		else 
		{
			temp = head; int i = 1;
			while(temp != NULL && i< vitri-1)
			{
	    		i++;
	        	temp = temp->next;
	    	}
	    	temp->next = temp->next->next;
	    }
    }
}
void in(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int main()
{
	int n,vitri,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		themcuoi(head,x);
	}
	string label;
	while(true)
	{
		cin>>label;
		if(label=="themdau")
		{
			cout<<"X: ";cin>>x;
			themdau(head,x);
		}
		if(label=="themcuoi")
		{
			cout<<"X: ";cin>>x;
			themcuoi(head,x);
		}
		if(label=="thembatky")
		{
			cout<<"X: ";cin>>x;
			cout<<"Vi tri: ";cin>>vitri;
			themvitribatky(head,x,vitri);
		}
		if(label=="xoadau")
		{
			xoadau(head);
		}
		if(label=="xoacuoi")
		{
			xoacuoi(head);
		}
		if(label=="xoabatky")
		{
			cout<<"Vi tri: ";cin>>vitri;
			xoavitribatky(head,vitri);
		}
		if(label=="in")
		{
			in(head);
		}
		if(label=="stop")
		{
			break;
		}
	}
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct HanhKhach 
//{
//    string hoten;
//    int tuoi;
//    int sotoa;
//    int soghe;
//    HanhKhach *next;
//};
//
//void LastIns(HanhKhach *& head, string vten, int vtuoi, int vtoa, int vghe) 
//{
//    HanhKhach *temp = head;
//    while (temp != NULL) 
//	{
//        if (temp->sotoa == vtoa && temp->soghe == vghe) 
//		{
//            cout << "FAIL" << endl;
//            return;
//        }
//        temp = temp->next;
//    }
//    
//    HanhKhach *newNode = new HanhKhach;
//    newNode->hoten = vten;
//    newNode->tuoi = vtuoi;
//    newNode->sotoa = vtoa;
//    newNode->soghe = vghe;
//    newNode->next = NULL;
//
//    if (head == NULL) 
//	{
//        head = newNode;
//    } else {
//        temp = head;
//        while (temp->next != NULL) 
//		{
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//}
//
//int SumPax(HanhKhach *head, int vtoa) 
//{
//    int sum = 0;
//    HanhKhach *temp = head;
//    while (temp != NULL) 
//	{
//        if (temp->sotoa == vtoa) 
//		{
//            sum++;
//        }
//        temp = temp->next;
//    }
//    return sum;
//}
//
//void DelPax(HanhKhach *&head, int vtoa, int vghe) 
//{
//	 if (head == NULL) 
//	 {
//        cout << "NONE" << endl;
//        return;
//    }
//
//    if (head->sotoa == vtoa && head->soghe == vghe) 
//	{
//        HanhKhach *temp = head;
//        head = head->next;
//        delete temp;
//        return;
//    }
//
//    HanhKhach *temp = head;
//    while (temp->next != NULL) 
//	{
//        if (temp->next->sotoa == vtoa && temp->next->soghe == vghe) 
//		{
//            HanhKhach *toBeDeleted = temp->next;
//            temp->next = temp->next->next;
//            delete toBeDeleted;
//            return;
//        }
//        temp = temp->next;
//    }
//    cout << "NONE" << endl;
//}
//
//int main() 
//{
//    HanhKhach *head = NULL;
//    string cmd;
//    while (cin >> cmd) {
//        if (cmd == "end") 
//		{
//            break;
//        }
//        if (cmd == "ins") 
//		{
//            string vten;
//            int vtuoi, vtoa, vghe;
//            cin >> vten >> vtuoi >> vtoa >> vghe;
//            LastIns(head, vten, vtuoi, vtoa, vghe);
//        }
//        if (cmd == "sum") 
//		{
//            int vtoa;
//            cin >> vtoa;
//            cout << SumPax(head, vtoa) << endl;
//        }
//        if (cmd == "del") 
//		{
//            int vtoa, vghe;
//            cin >> vtoa >> vghe;
//            DelPax(head, vtoa, vghe);
//        }
//    }
//    return 0;
//}




