//Fibonacci sequence 0 1 1 2 3 ...
#include <iostream>
using namespace std;
int main()
{
	int n, a=0, i=0, j=1;
	cout << "\nEnter the no of terms : ";
	cin >>n;
	cout << i << " , " << j << " , ";
	a=i+j;
	while (a<=n )
	{
		cout << a << " , ";
		i=j;
		j=a;
		a=i+j;
	}
	cout << a << "\t";
	return main();
}
