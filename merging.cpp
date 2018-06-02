#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "\nEnter the count of numbers of 1st and 2nd array respectively: ";
	cin >> n >> m;
	int left[n], right[m], arr[m+n];
	cout << "\nEnter elements for 1st array in sorted way: ";
	for (int i=0; i<n; i++)
		cin >> left[i];	
	cout << "\nEnter elements for 2nd array in sorted way: ";
	for (int i=0; i<m; i++)
		cin >> right[i];
	int i=0, j=0, k=0;
	while(i<n&&j<m&&k<m+n)
	{
		if (left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}	
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<m)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
//	arr[k]=(left[n-1]>=right[m-1])?left[n-1]:right[m-1];
	cout << "\nThe merged array is: ";
	for (int i=0; i<m+n; i++)
		cout << arr[i] << " ";
}
