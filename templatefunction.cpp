#include <iostream>
using namespace std;

class TemplateTest
{
	public : 
		template<class T>
		void msg(T t1)
		{
			cout << "\nParameter : " << t1;
		}
};

int main()
{
	TemplateTest t1;
	t1.msg(2);
	t1.msg((float)2.5);
	t1.msg('A');
	t1.msg(2.9999999999);
}
