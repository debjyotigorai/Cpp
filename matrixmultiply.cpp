//Matrix Multiplication
#include <iostream>
using namespace std;

int main()
{
	int a[2][2]={{2,4},{2,3}}, b[2][2]={{2,2},{2,2}}, c[2][2]={{0,0},{0,0}};
	for(int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			for (int k=0; k<2; k++)
			{
				c[i][j]+=a[i][k]*b[k][i];
			}
		}
	}
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		cout << c[i][j] << "\t";
		cout << endl;
	}
}
