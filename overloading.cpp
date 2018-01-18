//Function Overloading
#include <iostream>
using namespace std;

void msg()
{
	cout << "\nNo parameter";
}

void msg(int a)
{
	cout << "\nOne int parameter";
}

void msg (int a, int b)
{
	cout << "\nTwo int parameters";
}
void msg (int a, float b)
{
	cout << "\nOne int and one float parameter.";
}

int main()
{
	msg();
	msg(4);
	msg(5,(int)6);
}
