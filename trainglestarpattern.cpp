#include <iostream>
using namespace std;
int main()
{
	int row, temp, c, n;
	n=5;
	temp=n;
	for (row=1; row<=temp; row++)
	{
		for (c=1; c<temp; c++)
		{
			cout << " ";
		}
		temp--;
		for (c=1; c<=2*row-1; c++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
