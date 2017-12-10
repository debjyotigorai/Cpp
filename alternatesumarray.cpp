#include <iostream>
using namespace std;
int main()
{
	int m, n, i, j, k=0, sum=0;
	cout << "\nEnter the dimensions of the matrix : ";
	cin >> m >> n;
	int a[m][n], b[m*n];
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		cin >> a[i][j];
	}
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}
	for (i=0; i<m*n; i+=2)
	sum+=b[i];
	cout << "Alternate sum is : " << sum;
	return main();
}
