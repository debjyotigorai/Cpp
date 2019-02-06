#include <iostream>
using namespace std;

struct node
{
	int value;
	node *link;
};

class stack
{
	node *top;
	public:
		stack()
		{
			top=NULL;
		}
	void push();
	void pop();
	void display();
};

void stack::push()
{
	node *ptr;
	ptr=new node;
	cout << "\nEnter value: ";
	cin >> ptr->value;
	ptr->link=NULL;
	if (top==NULL)
		top=ptr;
	else
	{
		ptr->link=top;
		top=ptr;
	}	
}

void stack::pop()
{
	if (top==NULL)
		cout << "\nStack underflow.";
	else
	{
		node *temp;
		temp=top;
		top=top->link;
		cout << "\nDeleting " << temp->value << " from stack.";
		delete temp;
	}
}

void stack::display()
{
	node *temp;
	temp=top;
	while(1)
	{
		cout << temp->value << endl;
		if (temp->link==NULL)
			break;
		else
			temp=temp->link;
	}
}

int main()
{
	stack s;
	int choice;
	while(1)
	{
		cout << "\nMenu: "
			 << "\n1. Insert node."
			 << "\n2. Delete node."
			 << "\n3. Display stack."
			 << "\nEnter choice: ";
		cin >> choice;
		switch(choice)
		{
		case 1: 
			s.push();
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		default:
			cout << "\nWrong choice! Please try again.";
		}
	}
}
