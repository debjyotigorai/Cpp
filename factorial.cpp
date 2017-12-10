#include <iostream>
using namespace std;
int main()
{
	int a, i, fact;
	cout << "\nEnter a number to find out it's factorial : ";
	cin >> a;
	cout << a << "! = ";
	for (i=a; i>=1; i--)
	{
		if (i==1)
		cout << i;
		else 
		cout << i << "x";
		fact*=i;
	}
	cout << " = "<< fact;
	return main();
}
