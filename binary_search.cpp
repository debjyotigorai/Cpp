// Binary Search
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
	// Sorting using insertion sort
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
	// Searching
	int val;
	cout << "\nEnter a value you want to search : ";
	cin >> val;
	int left, right, flag=0, mid;
	left=0;
	right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if (a[mid]==val)
		{
			flag=1; 
			break;
		}
		else if (val<a[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	if (flag==1)
		cout << "\nValue Found at " << mid << " position.";
	else
		cout << "\nValue not found ! ";
}
