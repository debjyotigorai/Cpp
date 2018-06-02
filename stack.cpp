//Stack Operation
#include <iostream>
using namespace std;

int push(int arr[], int &tos, int n)
{
	int item;
	if (tos==n-1)
		cout << "\nOVERFLOW. Aborting !!!";
	else
	{
		cout << "\nEnter value: ";
		cin >> item;
		tos++;
		arr[tos]=item;
	}
	return tos;
}

int pop(int arr[], int &tos)
{
	int item;
	if (tos==-1)
		cout << "\nUNDERFLOW. Aborting !!!";
	else
	{
		item=arr[tos];
		tos--;
		cout << "\n" << item << " deleted from stack";
	}
	return tos;
}

void display(int arr[], int tos)
{
	if (tos==-1)
		cout << "\nStack is empty. Aborting !!!";
	else
		for (int i=0; i<=tos; i++)
			cout << endl << arr[i];
}

int main()
{
	cout << "\n\nEnter the range of the stack: ";
	int n;
	cin >> n;
	int arr[n], tos=-1, choose;
	lb:
	cout << "\nStack Operation Menu : "
		 << "\n1. Enter value"
		 << "\n2. Delete value"
		 << "\n3. Display stack"
		 << "\n4. Exit"
		 << "\nEnter your choice: ";
	cin >> choose;
	switch (choose)
	{
		case 1: tos=push(arr, tos, n);
				goto lb;
		case 2: tos=pop(arr, tos);
				goto lb;
		case 3: display(arr, tos);
				goto lb;
		case 4: exit(0);
				break;
		default: cout << "\nYou hvae entered a wrong choice. Try again.";
				 goto lb;
	}
	return main();	
}
