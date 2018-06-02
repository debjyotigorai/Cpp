// Merge Sort
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int n;
	cout << "\nEnter the count of nos you want to enter: ";
	cin >> n;
	int arr[n];
	cout << "\nEnter " << n << " nos: ";
	for (int i=0; i<n; i++)
		cin >> arr[i];
	for (int i=0; i<n; i+=2)
	{
		if (arr[i]>=arr[i+1])
			swap(arr[i], arr[i+1]);
	}
	
}
