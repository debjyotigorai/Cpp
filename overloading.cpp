#include <iostream>
using namespace std;

void msg()
{
	cout << "\nNo parameter";
}

void msg(int a)
{
	cout << "\nOne operator";
}

void msg (int a, int b)
{
	cout << "\nTwo operator";
}

int main()
{
	msg();
	msg(4);
	msg(5,6);
}
