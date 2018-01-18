//abstract class using pure virtual function
#include <iostream>
using namespace std;

class parent
{
	public :
		virtual void msg(int a)=0;
};
class child : public parent
{
	void msg(int a)
	{
		cout << "Square is : " << (a*a);
	}
};

int main()
{
	parent *p;
	child c;
	p=&c;
	p->msg(2);
}
