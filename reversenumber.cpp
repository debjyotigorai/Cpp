//Reverse print a number.
#include <iostream>
using namespace std;
int main()
{
	long int a, r, x=0;
	cout << "\nEnter any number : ";
	cin >> a;
	while (a>0)
	{
		r=a%10;
		x=(x*10)+r;
		a=a/10;	
	}
	cout << "The number in reverse order is : " << x;
	return main();
}
