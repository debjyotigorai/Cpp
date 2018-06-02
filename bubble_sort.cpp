//Bubble sort
#include <iostream>
using namespace std;

int main()
{
	int n, i, j, temp;
	cout << "\nEnter the count of nos you want to enter: ";
	cin >> n;
	cout << "\nEnter " << n << " nos: ";
	int a[n];
	for (i=0; i<n; i++)
		cin >> a[i];
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout << "\nSorted Array : ";
	for (i=0; i<n; i++)
		cout << a[i] << " ";
}
