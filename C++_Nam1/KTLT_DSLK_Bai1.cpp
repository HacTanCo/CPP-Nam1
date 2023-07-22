#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node * head = NULL;

Node* CreateNode(int value) 
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = NULL; 
    return temp;
}

void InsertLast(Node *& head, int value)
{
    Node* temp = CreateNode(value); 
    if(head == NULL)
	{
        head = temp; 
    }
	else
	{
    	Node * p = head;
        while(p->next!=NULL)
        	p = p->next;
        p->next = temp;
    }
    
}

void  Delete(Node *& head, int pos)
{
	int n = 0;
	Node * p = head;
    while(p!=NULL)
	{
    	n++;
        p = p->next;
    }
    if (pos>=1 && pos <= n)
	{
    	if (pos==1)
    		head = head->next;
		else 
		{
			p = head; int i = 1;
			while(p!=NULL && i<pos-1)
			{
	    		i++;
	        	p = p->next;
	    	}
	    	p->next = p->next->next;
	    }
    }
}

int traversal_sum(Node *head)
{
	int s = 0;
	Node* temp = head;
	while(temp != NULL)
	{
		s += temp->data;	
		temp = temp->next;
	}
	return s;
}

int main()
{
	int n, value, pos;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>value;
		InsertLast(head, value);
	}
	string command;
	while(true)
	{
		cin>>command;
		if (command=="i")
		{
			cin>>value;
			InsertLast(head, value);
		}
		if (command=="d")
		{
			cin>>pos;
			Delete(head, pos);
		}
		
		if (command=="s")
		{
			cout<<traversal_sum(head)<<endl;
		}
		
		
		
		if (command=="0")
		{
			break;
		}	
	}
	return 0;
}

