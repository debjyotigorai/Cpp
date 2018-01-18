#include <iostream>
using namespace std;

class Vector
{
	private :
		int i, j, k;
	public :
		void getdata()
		{
			cout << "\nEnter the coefficients of unit vector i, j, k respectively : ";
			cin >> i >> j >> k;
		}
		void display()
		{
			cout << i <<"i + " << j << "j + " << k << "k" <<endl;
		}
		Vector operator +(Vector y, Vector z)
		{
			Vector temp;
			temp.i=i+y.i+z.i;
			temp.j=j+y.j+z.j;
			temp.i=k+y.k+z.k;
			return (temp);
		}	
};

int main()
{
	Vector a, b, r;
	a.getdata();
	a.display();
	b.getdata();
	b.display();
	r=a+b;
	cout << "Result : " << endl;
	r.display();
}
