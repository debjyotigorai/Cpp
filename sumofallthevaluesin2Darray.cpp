//Sum of all the values in a 2D array
#include <iostream>
using namespace std;
int main()
{
	int a[2][2], i, j, sum=0;
	cout << "\nEnter 4 values in the 2D array : ";
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		cin >> a[i][j];
	}
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		cout << a[i][j] << " + ";
	}
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		sum+=a[i][j];
	}
	cout << "\b\b= " << sum;
	return main();
}
