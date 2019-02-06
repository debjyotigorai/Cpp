#include <iostream>
using namespace std;

struct node
{
	int value;
	node *link;
};

class queue
{
	node *rear, *front;
	public:
		queue()
		{
			rear=front=NULL;
		}
	void insert();
	void remove();
	void display();
};

void queue::insert()
{
	node *ptr;
	ptr = new node;
	cout << "\nEnter value: ";
	cin >> ptr->value;
	ptr->link = NULL;
	if (rear==NULL)
	{
		rear=front=ptr;
	}
	else
	{
		rear->link=ptr;
		rear=ptr;
	}
}

void queue::remove()
{
	if (rear==NULL)
		cout << "\nQueue underflow.";
	else if (rear==front)
	{
		cout << "\nDeleting " << front->value << " from queue.";
		delete rear;
		rear=front=NULL;
	}
	else
	{
		node *temp;
		temp=front;
		front=front->link;
		cout << "\nDeleting " << temp->value << " from queue.";
		delete temp;
	}
}

void queue::display()
{
	if (rear==NULL)
		cout << "\nQueue underflow.";
	else
	{
		node *temp;
		temp=front;
		while(1)
		{
			cout << temp->value << "\t";
			if(temp->link==NULL)
				break;
			else
				temp=temp->link;
		}
	}
}

int main()
{
	queue q;
	int choice;
	while(1)
	{
		cout << "\nMenu: "
			 << "\n1. Insert node."
			 << "\n2. Delete node."
			 << "\n3. Display queue."
			 << "\nEnter choice: ";
		cin >> choice;
		switch(choice)
		{
		case 1: 
			q.insert();
			break;
		case 2:
			q.remove();
			break;
		case 3:
			q.display();
			break;
		default:
			cout << "\nWrong choice! Please try again.";
		}
	}
}
