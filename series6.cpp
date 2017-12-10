//1 + 1/2! + 1/3! + 1/4! + ... + 1/n!
#include <iostream>
using namespace std;
int main()
{
	long double n, i, j, mult=1, sum=0;
	cout << "\nEnter the number of terms : ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		mult*=j;
		cout << "1/" << i << "! + ";
		sum+=(1/mult);
		mult=1;
	}
	cout << "\b\b= " << sum;
	return main();
}
