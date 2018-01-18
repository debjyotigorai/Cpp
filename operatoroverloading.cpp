//Complex Number addition, operator overloading
#include <iostream>
using namespace std;

class complex
{
	private :
		double real, imag;
	public :
		void getData()
		{
			cout << "Enter real and imaginary part separately : ";
			cin >> real >> imag;
		}	
		complex operator +(complex x)
		{
			complex temp;
			temp.real=real+x.real;
			temp.imag=imag+x.imag;
			return (temp);
		}
		void display()
		{
			cout << real << " + " << imag << "i" << endl;
		}
};
int main()
{
	complex a1, a2, a3;
	a1.getData();
	a1.display();
	a2.getData();
	a2.display();
	a3=a1+a2;
	cout << "Result : " << endl;
	a3.display();
	return main();
}
