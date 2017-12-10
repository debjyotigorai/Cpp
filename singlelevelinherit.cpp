#include <iostream>
using namespace std;

class x
{
	public : 
	msg()
	{
		cout << "Parent Class";
	}
};

class y : public x
{
	public : 
	msg1()
	{
		cout << "Child Class";
	}
};

main()
{
	y y1;
	y1.msg();
	cout << endl;
	y1.msg1();
}
