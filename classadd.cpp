#include <iostream>
using namespace std;

class ADD
{
	private :
		int a, b;
	public :
		
		void setdata(int p, int q)
		{
			a=p;
			b=q;
		}
		
		void sum()
		{
			int c;
			c=a+b;
			cout << "Sum is : " << c;
		}	
};

int main ()
{
	ADD a, b;
	int s, t;
	cout <<" \nEnter two numbers : ";
	cin >> s >> t;
	a.setdata(s,t);
	b=a;
	b.sum();
	return main();
}
