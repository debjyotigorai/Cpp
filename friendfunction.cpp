#include <iostream>
using namespace std;

class y;
class x
{
	private :
		int a;
	public :
		void getData()
		{
			cout << "Enter any value : ";
			cin >> a;
		}
		friend void sum(x &xobj, y &yobj);	
};
class y
{
	private :
		int b;
	public :
		void getData()
		{
			cout << "Enter any number : ";
			cin >> b;
		}
		friend void sum(x &xobj, y &yobj);
};
void sum(x &xobj, y &yobj)
{
	int sum=xobj.a+yobj.b;
	cout << "Sum is : " << sum;
}

int main()
{
	x x1;
	x1.getData();
	y y1;
	y1.getData();
	sum(x1, y1);
}

