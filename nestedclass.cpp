#include <iostream>
using namespace std;

class outer
{
	int a;
	public:
		void enter2()
		{
			cout << "\nEnter value: ";
			cin >> a;
			cout << "a = " << a;
		}
		class inner
		{
			int b;
			public:
				void enter()
				{
					cout << "\nEnter a value: ";
					cin >> b;
					cout << "b = " << b;
				}
		};
		inner ob_inner;
};

int main()
{
	outer ob1;
	outer::inner ob2;
	ob2.enter();
	ob1.ob_inner.enter();
	cout <<"\nSize of ob1: " << sizeof(ob1);
	
	
}
