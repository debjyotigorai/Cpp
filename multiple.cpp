/*//First 10 multiples of a number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;
	cout <<"Enter any number :";
	cin >> a;
	cout << a << "x1=" << a*1 << endl;
	cout << a << "x2=" << a*2 << endl;
	cout << a << "x3=" << a*3 << endl;
	cout << a << "x4=" << a*4 << endl;
	cout << a << "x5=" << a*5 << endl;
	cout << a << "x6=" << a*6 << endl;
	cout << a << "x7=" << a*7 << endl;
	cout << a << "x8=" << a*8 << endl;
	cout << a << "x9=" << a*9 << endl;
	cout << a << "x10=" << a*10 << endl; 
}*/
#include <iostream>
using namespace std;
int main()
{
	long long int n, range, i=0;
	cout << "\n\nEnter any number : ";
	cin >> n;
	cout << "\nEnter the range : ";
	cin >> range;
	for (i=1; i<=range; i++)
	{
		cout << "\n" << n << " X " << i << " = " << n*i;
	}
	return main();
}
