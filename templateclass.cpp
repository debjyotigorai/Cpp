#include <iostream>
using namespace std;

template<class T>

class A
{
	public :
		void sum(T a, T b)
		{
			T c;
			c=a+b;
			cout << "Result : " << c;
		}
};

int main()
{
	int a, b;
	cout << "Enter two values : ";
	cin >> a >> b;
	A <int>a1;
	a1.sum(a, b);
	
}
