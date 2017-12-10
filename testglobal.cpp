#include <iostream>
using namespace std;
float a=20;          // (Global) File Scope 
void test();
int main()
{
	float a;          // Local Scope
	a=10;
	cout << a << endl;
	cout << ::a << endl;
	{
		float a=40;    // Block Scope
		cout << a << endl;
		cout << ::a << endl;
	}
	test ();
}
void test ()
{
	cout << a << endl; 
}
