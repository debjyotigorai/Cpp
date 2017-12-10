#include <iostream>
using namespace std;

add(int a, int b)
{
	int c=a+b;
	return c;
}

int main()
{
	int p, q;
	cout << "\nEnter two numbers : ";
	cin >> p >> q;
	int sum;
	sum=add(p,q);
	cout << "Sum is : " << sum;
	return main();
}
