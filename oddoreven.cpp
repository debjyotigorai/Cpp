// Check whether the given number is odd or even
// float system don't work in this program. % is not valid.

#include <iostream>

using namespace std;

int main()

{
    long int n;
	cout << "Enter any number : ";
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "The number " << n << " is even";
	}
	else
	{
		cout << "The number " << n << " is odd";
	}
	return 0;
}
