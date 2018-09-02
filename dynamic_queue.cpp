//Dynamic Queue
#include <iostream>
using namespace std;

struct node
{
	int item;
	node *link;
}*front, *rear, *temp, *ptr;

void insert_node()
{
	ptr=new node;
	cout << "\nEnter value for item: ";
	cin >> ptr->item;
	ptr->link=NULL;
	if (ptr==NULL)
	{
		cout << "\nNo free space available.";
	}
	else
	{
		if (front==NULL)
			front=rear=ptr;
		else
		{
			rear->link=ptr;
			rear=ptr;
		}
	}
}

void delete_node()
{
	if (front==rear&&front!=NULL&&rear!=NULL)
	{
		cout << "Deleted " << front->item << " from queue.";
		delete front;
		front=rear=NULL;
	}
	else if(front==NULL)
	{
		cout << "\nQueue underflow.";
	}
	else
	{
		temp=front;
		front=front->link;
		cout << "Deleted " << temp->item << " from queue.";
		delete temp;
	}
}

void display_node()
{
	node *display;
	if (front==NULL)
		cout << "\nStack Underflow.";
	else
	{
		display=front;
		cout << display->item << endl;
		while(display->link!=NULL)
		{
			display=display->link;
			cout << display->item << endl;
		}
	}
}

int main()
{
	front=rear=NULL;
	while(1)
	{
		cout << "\nQUEUE MENU: "
		 << "\n1. Insert a node."
		 << "\n2. Delete a node."
		 << "\n3. Display queue."
		 << "\nEnter correct choice: ";
		int choose;
		cin >> choose;
		switch(choose)
		{
			case 1: insert_node();
					break;
			case 2: delete_node();
					break;
			case 3: display_node();
					break;
			default: cout << "\nWrong choice entered. Try again!";
		}
	}
}
