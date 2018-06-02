#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int max, min, c;
	max=(a>b)?a:b;
	min=(a<b)?a:b;
	do
	{
		c=max%min;
		max=min;
		min=c;
	}
	while (c>0);
	return max;
}

int main()
{
	int a, b;
	cout << "\nEnter two nos : ";
	cin >> a >> b;
	cout << "GCD is " << gcd(a,b);
	return main();
}
