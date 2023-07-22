//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	
//	Node *next;
//};
//
//Node * head = NULL;
//
//Node* CreateNode(int value) 
//{
//    Node* temp = new Node();
//    temp->data = value;
//    temp->next = NULL; 
//    return temp;
//}
//
//void InsertFirst(Node *& head, int value)
//{
//    Node* temp = CreateNode(value);
//    if(head == NULL)
//	{
//        head = temp; 
//    }
//	else
//	{
//        temp->next = head; 
//        head = temp;
//    }
//}
//
//void  DeleteFirst(Node *& head)
//{
//	if(head != NULL)
//	{
//        head = head->next;
//    }
//}
//
//int traversal_sum(Node *head)
//{
//	int s = 0;
//	Node* temp = head;
//	while(temp != NULL)
//	{
//		s += temp->data;	
//		temp = temp->next;
//	}
//	return s;
//}
//int main()
//{
//	string command;
//	int value;
//	while(true)
//	{
//		cin>>command;
//		if (command=="add")
//		{
//			cin>>value;
//			InsertFirst(head, value);
//		}
//		if (command=="del")
//		{
//			DeleteFirst(head);
//		}
//		
//		if (command=="sum")
//		{
//			cout<<traversal_sum(head)<<endl;
//		}
//		
//		if (command=="finish")
//		{
//			break;
//		}	
//	}
//	return 0;
//}


#include<iostream>
using namespace std;
struct node
{
	string ten;
	int soluong;
	int dongia;
	node *next;	
};
node *head=NULL;
node *createnode(string t,int sl,int dg)
{
	node *temp=new node();
	temp->ten=t;
	temp->soluong=sl;
	temp->dongia=dg;
	temp->next=NULL;
	return temp;
}
void InsertFirst(node *& head, string t, int sl, int dg)
{
	node *temp=createnode(t,sl,dg);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next=head;
		head = temp;
	}
	
}
int sum(node *head,string ten)
{
	int s = 0;
	node *temp = head;
	while(temp != NULL)
	{
		if(temp->ten == ten)
		{
			s += temp->soluong * temp->dongia;	
		}
		temp = temp->next;
	}
	return s;
}
int main()
{
	string command;
	string name;
	int sl,dg;
	while(true)
	{
		cin>>command;
		if (command=="add")
		{
			cin>>name>>sl>>dg;
			InsertFirst(head,name,sl,dg);
		}
		if (command=="sum")
		{
			cin>>name;
			cout<<sum(head,name)<<endl;
		}
		
		if (command=="fin")
		{
			break;
		}	
	}
	return 0;
}
