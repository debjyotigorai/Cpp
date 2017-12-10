//1 + 1/(2^2) + 1/(3^2) + ... + 1/(n^2)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long double n, i, sum=0;
	cout << "\nEnter the the number of terms : ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		if (i==1)
		cout << "1 + ";
		else if (i==n)
		cout << "1/(" << n << "^2)";
		else 
		cout << "1/(" << i << "^2) + ";
		sum+=(1/pow(i,2));
	}
	cout << " = " << sum;
	return main();
}
