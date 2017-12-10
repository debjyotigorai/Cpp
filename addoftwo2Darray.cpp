//Add of 2 2D arrays.
#include <iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2], c[2][2], i, j, sum=0;
	cout << "\nEnter 4 values for the first array : ";
	for(i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		cin >> a[i][j];
	}
	cout << "Enter the values for the second array : ";
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		cin >> b[i][j];
	}
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	cout << "The new matrix is : " << endl;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		cout << c[i][j] << "\t";
		cout << endl;
	}
	return main();
}
