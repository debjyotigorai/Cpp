#include <iostream>
using namespace std;

class linear 
{
	private :
		int x, y, c;
	public :
		void getdata()
		{
			cout << "\nEnter the coefficients of x and y respectively : ";
			cin >> x >> y;
			cout <<"\nEnter the value of constant : ";
			cin >> c;
		}
		
		linear operator+(linear l)
		{
			linear temp;
			temp.x=x+l.x;
			temp.y=y+l.y;
			temp.c=c+l.c;
			return temp;
		}
		void display()
		{
			cout << x << "x + " << y << "y + " << c << endl;
		}
};

int main()
{
	linear l1, l2, l3;
	l1.getdata();
	l1.display();
	l2.getdata();
	l2.display();
	l3=l1+l2;
	l3.display();
}
