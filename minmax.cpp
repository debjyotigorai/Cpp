//Check min and max
#include <iostream>
using namespace std;
int main()

{
	long double a, b;
	cout <<"\nEnter any two numbers to find out the min and max : ";
	cin >> a >> b;
	if (a>b)
	{
		cout << "The max is : " << a;
	}
	else if (b>a)
	{
	    cout << "The max is : " << b;	
	}
	else
	{
		cout << "Both numbers are equal.";
	}
	return main();
}
