#include <iostream>
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
	cin >> item;
	while(item!=-9999)
	{
		n=(struct *node)malloc(sizeof(struct node));
		n->data=item;
		n->next=NULL;
		if(r==NULL)
			r=n;
		else
			p->next=n;
		p=n;
		cout << "\nEnter data, -9999 for exit: ";
		cin >> item;
	}
}

int main()
{
	cout << "\nLINKED LIST OPERATIONS: "
	     << "\n1. Enter value."
	     << "\n2. Search value."
	     << "\n3. Delete value";
	int choose;
	switch (choose)
	{
		case 1: CreateNode();
				break;
	}
}
