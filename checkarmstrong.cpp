#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, x=0, r=0, arms=0, c=0;
	cout << "\nEnter a number : ";
	cin >> a;
	b=a;
	while (a>0)
	{
		r=a%10;
		x=x*10+r;
		a=a/10;
		c++;
	}
	while (x>0)
	{
		r=x%10;
		arms = arms + pow (r,c);
		x=x/10;
	}
	if (arms==b)
	cout << "Armstrong number.";
	else
	cout << "Not Armstrong";
	return main();
}
