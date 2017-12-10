//1 + 1/(2^2) + 1/(3^3) + 1/(4^4) + ... + 1/(n^n)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long double n, i, j, sum=0;
	cout << "\nEnter the number of terms : ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		if (i==1)
		cout << "1";
		else if (i==n)
		cout << " + "<< " 1/(" << n << "^" << n << ")";
		else
		cout << " + " << " 1/(" << i << "^" << i << ")";
		sum+=1/pow(i,i);
	}
	cout << " = " << sum;
	return main();
}
