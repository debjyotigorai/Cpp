#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *r, *p, *n;

void CreateNode()
{
	int item;
	r=p=n=NULL;
	cout << "\nEnter data, -9999 for exit: ";
	cin.sync();
	cin >> item;
	while(item!=-9999)
	{
		n=(struct node*)malloc(sizeof(struct node));
		n->data=item;
		n->next=NULL;
		if(r==NULL)
			r=n;
		else
			p->next=n;
		p=n;
		cout << "\nEnter data, -9999 for exit: ";
		cin.sync();
		cin >> item;
	}
}

void DisplayNode()
{
	p=r;
	while(p!=NULL)
	{
		cout << "Data= " << p->data << "\t";
		p=p->next;
	}
}

void DeleteNode()
{
	cout << "\nEnter position: ";
	int position;
	cin >> position;
	p=NULL;
	if (position==1)
	{
		r=r->next;
	}
	else
	{
		p=r;
		for(int i=1; i<position-1; i++)
		{
			p=p->next;
		}
		p->next=(p->next)->next;
	}
	cout << "\nNode deleted!";
}

void InsertNode()
{
	int item, position;
	cout << "\nEnter value: ";
	cin >> item;
	cout << "\nEnter position: ";
	cin >> position;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=item;
	n->next=NULL;
	if (position==1)
	{
		n->next=r;
		r=n;
	}
	else
	{
		p=r;
		for (int i=1; i<position-1; i++)
		{
			
			p=p->next;
		}
		n->next=p->next;
		p->next=n;
		
	}
	cout << "\nNode inserted!";
	
}

int main()
{
	while(1)
	{
		cout << "\nLINKED LIST OPERATIONS: "
	     << "\n1. Create node."
	     << "\n2. Display all nodes."
	     << "\n3. Delete node. "
	     << "\n4. Insert Node."
	     << "\n\nEnter a choice: ";
		int choose;
		cin >> choose;
		switch (choose)
		{
			case 1: CreateNode();
					break;
			case 2: DisplayNode();
					break;
			case 3: DeleteNode();
					break;
			case 4: InsertNode();
					break;
			default: cout << "\nYou have entered awrong choice. Try again.";
		}
	}
}
