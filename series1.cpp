//1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n
#include <iostream>
using namespace std;
int main()
{
	long double n, i, sum=0;
	cout << "\nEnter the the number of terms : ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		if (i==1)
		cout << "1";
		else if (i==n)
		cout << "1/" << n ;
		else 
		cout << " + " <<"1/" << i << " + ";
		sum+=(1/i);
	}
	cout << " = " << sum;
	return main();
}
