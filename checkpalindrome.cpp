#include <iostream>
using namespace std;
int main()
{
	long long int a, b, x=0, r;
	cout << "\nEnter a number : ";
	cin >> a;
	b=a;
	while (a>0)
	{
		r=a%10;
		x=x*10+r;
		a=a/10;
	}
	if (x==b)
	{
		cout << x << " = " << b;
	    cout << "\nPalindrome";
	}
	else 
	{
		cout << x << " != " << b;
	    cout << "\nNot Palindrome.";
	}
	return main();
}
