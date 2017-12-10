#include <iostream>
using namespace std;
int main()
{
	int a, i, j;
	cout << "Enter a max range : ";
	cin >> a ;
	for (i=1; i<=a; i++)
	{
		for (j=0; j<i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}
