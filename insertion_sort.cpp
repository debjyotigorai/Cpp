//Insertion Sort
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "\nEnter the count of nos you want to enter: ";
	cin >> n;
	int a[n], i, j, temp;
	cout << "\nEnter " << n << " nos: ";
	for (i=0; i<n; i++)
		cin >> a[i];
	for (i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[i]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout <<"\nSorted array : ";
	for (i=0; i<n; i++)
		cout << a[i] << " ";
}
