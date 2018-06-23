//Queue Operation
#include <iostream>
using namespace std;

void insertion(int queue[], int &front, int &rear, int size)
{
	cout << "\nEnter a value: ";
	int item;
	cin >> item;
	if (rear==size-1)
	{
		cout << "\nQueue is overflow.";
	}
	else
	{
		if (rear==-1)
		{
			rear=0;
			front=0;
		}
		else
		{
			rear++;
		}
		queue[rear]=item;
	}
}

void deletion(int queue[], int &front, int &rear)
{
	int item;
	if (front==-1||front==rear+1)
	{
		cout << "\nQueue is underflow.";
		front=-1;
		rear=-1;
	}
	else
	{
		item=queue[front];
		front++;
		cout <<"\n" << item << " deleted from queue. ";
	}
}
void display(int queue[], int front, int rear)
{
	if (front==-1||front==rear+1)
		cout << "\nQueue is empty";
	else
	{
		for (int i=front; i<=rear; i++)
		{
			cout << queue[i] << "\t";
		}
	}
}

int main()
{
	int size, choose;
	cout << "\nEnter the size of the queue : ";
	cin >> size;
	int queue[size], rear=-1, front=-1;
	while(1)
	{
		cout << "\nQueue Operation Menu : "
		 	<< "\n1. Enter value"
			 << "\n2. Delete value"
			 << "\n3. Display queue"
			 << "\n4. Exit"
			 << "\nEnter your choice: ";
		cin >> choose;
		switch (choose)
		{
			case 1: insertion(queue, rear, front, size);
					break;
			case 2: deletion(queue, rear, front);
					break;
			case 3: display(queue, rear, front);
					break;
			case 4: exit(0);
			default: cout << "\nYou hvae entered a wrong choice. Try again.";
		}
	}
}
