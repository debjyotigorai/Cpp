//Quick sort
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int left_to_right(int arr[], int low, int high, int pivot);
int right_to_left(int arr[], int low, int high, int pivot);

int quicksort(int arr[], int low, int high)
{
	int pivot=arr[low];
	
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
	quicksort(arr, 0, n-1);
}

int right_to_left(int arr[], int low, int high, int pivot)
{
	//right to left
	for (int i=high; i>=low; i--)
	{
		if (arr[i]<=pivot)
		{
			swap(arr[i], pivot);
			left_to_right(arr, low, high, pivot);
			break;
		}
	}
}

int left_to_right(int arr[], int low, int high, int pivot)
{
	for (int i=low; i<=high; i++)
	{
		if (arr[i]>=pivot)
		{
			swap(arr[i], pivot);
			right_to_left(arr, low, high, pivot);
			break;
		}
	}
	
}
