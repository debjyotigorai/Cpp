#include <iostream>
using namespace std;

class test
{
	int a;
	public:
		void view()
		{
			cout << "\nvalue: " << a;
		}
		void input()
		{
			cout << "\nEnter value: ";
			cin >> a;
		}
		test(const test &t)
		{
			a=t.a;
		}
		test()
		{
			
		}
		
};

int main()
{
	test c;
	c.input();
	c.view();
	test t(c);
	c.view();
}
