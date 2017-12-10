//Finding mod using fuctions
#include <iostream>
using namespace std;
int mod (int a, int b);
int main()
{
	int x, y, z;
	cout << "\nEnter two values : ";
	cin >> x >> y;
	z=mod(x, y);
	cout << "Mod is : " << z;
	return main();
}
int mod (int a, int b)
{
	int c;
	c=a%b;
	return c;
}
