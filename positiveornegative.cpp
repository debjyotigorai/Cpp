// Check whether the given number is positive, negative or zero
#include <iostream>

using namespace std; 

int main()

{
	float a;
	cout << "Enter any number : ";
	cin >> a;
	if (a>0)
	{
		cout << "The number "  << a << " is positive.";
	}
	else if (a==0)
	{
		cout << "The number " << a << " is zero which is neither negative or positive.";
	}
	else
	{
		cout << "The number " << a << " is negative";
	}
	return 0;
}
