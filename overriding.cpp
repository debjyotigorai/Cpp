//Function Overriding
#include <iostream>
using namespace std;

class A
{
	public :
		virtual void display(int a)
		{
			cout << "Parent Class";
		}
};

class B : public A
{
	public :
		void display(int b)
		{
			cout << "Child Class";
		}
};

int main()
{
	A *a;
	B b;
	a=&b;
	a->display(10);
	return 0;
}
