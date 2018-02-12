//Pure virtual Function
#include <iostream>
using namespace std;

class Parent
{
	public :
		virtual int msg(int)=0;
};

class Child : public Parent
{
	public :
		int msg(int)
		{
			int a;
			cin >> a;
			cout << "You have entered one integer parameter.";
		}
};

int main()
{
	Parent *p;
	Child c;
	p=&c;
	p->msg(2);
}
