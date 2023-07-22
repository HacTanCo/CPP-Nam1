#include<iostream>
#include<iomanip>
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
    }else
	{
    	Node * p = head;
        while(p->next!=NULL)
        {
        	p = p->next;
		}
        p->next = temp;
    }
    
}

void  InsertBeforePos(Node *& head, int value, int pos)
{
	Node * temp = CreateNode(value);
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
		{
    		if (head == NULL)
    		{
    			head = temp;
			}
    		else
			{
    			temp->next = head;
    			head = temp;
    		}
    	}
		else
		{
    		p = head; int i = 1;
			while(p!=NULL && i<pos-1)
			{
	    		i++;
	        	p = p->next;
	    	}
	    	temp->next = p->next;
	    	p->next = temp;
		}    		  	
    }
    else
    {
    	InsertLast(head, value);
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
    	if (pos == 1)
    	{
    		head = head->next;
		}
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

float traversal_average(Node *head)
{
	float s = 0; float n=0;
	while(head != NULL)
	{
		s += head->data;
		n++;	
		head = head->next;
	}
	return s/n;
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
			cin>>value>>pos;
			InsertBeforePos(head, value, pos);
		}
		if (command=="d")
		{
			cin>>pos;
			Delete(head, pos);
		}
		
		if (command=="a")
		{
			cout<<setprecision(4) << fixed <<traversal_average(head)<<endl;
		}
		
		if (command=="0")
		{
			break;
		}	
	}
	return 0;
}

