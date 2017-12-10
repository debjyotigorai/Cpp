#include <iostream>
using namespace std;

class alpha
{
	private :
		int a, b, s;
	public :
		alpha()
		{
			cout << "Enter two numbers : ";
			cin >> a >> b;
		}
		void sum()
		{
			s=a+b;
			cout << "Sum is : " << s;
		}
};

int main()
{
	alpha b;
	b.sum();
	return 0;
}
