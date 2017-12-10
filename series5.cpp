//1 - x^2 + x^3 - x^4 + ...
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int i, x, sum=1, n;
	cout << "Enter the value of x : ";
	cin >> x;
	cout << "Enter the range : ";
	cin >> n;
	cout << "1";
	for (i=2; i<=n; i++)
	{
		int z=pow(-1,i+1);
		if (z<0)
		 cout << " - ";
		else
		 cout << " + "; 
		if (i==n)
		 cout << x << "^5 ";
		else 
		 cout << x << "^" << i;
		sum+=(z)*(pow(x,i));
	}
	cout << " = " << sum;
}
