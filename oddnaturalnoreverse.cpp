#include <iostream>
using namespace std;

int main()
{
	cout << "\nEnter the upper limit : ";
	int n;
	cin >> n;
	while(n)
	{
		cout << 2*n-1 << "\t";
		n--;
	}
}
