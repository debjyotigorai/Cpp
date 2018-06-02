#include <iostream>
using namespace std;

int main()
{
	int n, max;
	cout << "\nEnter the count of values you want to enter: ";
	cin >> n;
	int arr[n];
	cout << "\nEnter the values: ";
	for (int i=0; i<n; i++)
		cin >> arr[i];
	int temp;
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		if (arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	cout << "\nSorted array : ";
	for (int i=0; i<n; i++)
		cout << arr[i] << "\t";
	int hcf, flag=0, k=arr[0];
	for (hcf=1; hcf<=arr[0]; hcf++)
	{
		for (int i=1; i<n; i++)
		{
			if (arr[i]%hcf!=0)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
			continue;
		else
			max=hcf;
	}
	cout << "\nHCF : " << max;
}
