//Matrix Multiplication
#include <iostream>
using namespace std;

int main()
{
	int h, i, j, k;
	cout<< "Enter the dimensions of matrix one : ";
	cin >> h >> i;
	cout <<"\nEnter the dimension of matrix two : ";
	cin >> j >> k;
	if (i==j)
	{
		int a[h][i], b[j][k], c[i][j], x, y, z;
		cout << "\nEnter the values of matrix one : ";
		for (x=0; x<h; x++)
		{
			for (y=0; y<i; y++)
			cin >> a[h][i];
		}
		cout << "\nEnter the values of matrix two : ";
		for (x=0; x<j; x++)
		{
			for (y=0; y<k; y++)
			cin >> a[h][i];
		}
		for (x=0; x<i; x++)
		{
			for (y=0; y<j; y++)
			c[i][j]=0;
		}
		for (x=0; x<h; x++)
		{
			for (y=0; y<i; y++)
			{
				for (int z=0; z<k; z++)
				c[x][y]+=a[x][z]*b[z][y];
			}
		}
		cout << "\nThe Multiplied matrix is : ";
		for (x=0; x<i; x++)
		{
			for (y=0; y<j; y++);
			cout << c[x][y] << "\t";
			cout << endl;
		}
		
	}
	else
	cout << "The above matrixes can't be multiplied.";
	return main();
}
