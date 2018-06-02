#include <iostream>
using namespace std;
int main()
{
	int a[10], i, j, temp;
	cout << "\nEnter 10 values : ";
	for (i=0; i<10; i++)
	{
		cin >> a[i];
	}
	for (i=0; i<8; j++)
	{
		for (j=i+1; j<9; j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0; i<10; i++)
	{
		cout << a[i] << "\t";
	}
	return main();
}
