// 1x(1) + 2x(1+2) + 3x(1+2+3) + 4x(1+2+3+4) + ... + nx(1+2+3+...+n) 
#include <iostream>
using namespace std;
int main()
{
	int i, j, n, sum=0, mult=0;
	cout << "\nEnter the number of terms : ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		cout << i << "x(";
		sum=0;
		for (j=1; j<=i; j++)
		{
			cout << j <<"+";
			sum+=j;
		}
		cout << "\b)+";
		mult+=i*(sum);
	}
	cout << "\b= " << mult;
	return main();
}
