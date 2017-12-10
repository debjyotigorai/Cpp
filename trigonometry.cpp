//To find out the values of sin, cos, tan, cot, cosec and cosec of user input angle
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long double choose, i;
	long double a;
	cout << "\n\n|| THIS PROGRAM IS CREATED IN Dev-C++ AND IS OWNED BY DEBJYOTI GORAI.   || ";
	cout << "\n|| YOU ARE PROHIBITED TO EDIT OR COPY THE CODE OF THE PROGRAM.          || ";
	cout << "\n|| BUT YOU CAN SHARE OR DISTRIBUTE IT AMONG OTHERS.                     ||\n\n";
	cout << "\n\nPlease note the following ranges of trigonometric ratios before you enter a value of angle";
	cout << "\na) sin(x)= [-1,1]\nb) cos(x)= [-1,1]\nc) tan(x)= (-inf,+inf)\nd) cot(x)= (-inf,+inf)\ne) cosec(x)= (-inf,-1]U[1,+inf)\nf) sec(x)= (-1,+inf]U[1,+inf)"; 
	cout << "\n\nChoose your option :";
	cout << "\n1. Sine";
	cout << "\n2. Cosine";
	cout << "\n3. Tangent";
	cout << "\n4. Cotangent";
	cout << "\n5. Cosecant";
	cout << "\n6. Secant";
	cout << "\nChoose option 1/2/3/4/5/6 :";
	cin >> choose;
	if (choose==1)
	{
		cout << "Enter the angle in degrees to find out it's sine : ";
		cin >> a;
		cout << "\nThe value of sin("<< a <<") is " << sin((a*22)/(7*180));
	}
    else if (choose==2)
	{
		cout << "Enter the angle in degrees to find out it's cosine : ";
		cin >> a;
		cout << "\nThe value of cos("<< a <<") is " << cos((a*22)/(7*180));
	}
	else if (choose==3)
	{
		cout << "Enter the angle in degrees to find out it's tangent : ";
		cin >> a;
		cout << "\nThe value of tan("<< a <<") is " << tan((a*22)/(7*180));
	}
	else if (choose==4)
	{
		cout << "Enter the angle in degrees to find out it's cotangent : ";
		cin >> a;
		cout << "\nThe value of cot("<< a <<") is " << 1/(tan((a*22)/(7*180)));
	}
	else if (choose==5)
	{
		cout << "Enter the angle in degrees to find out it's cosecant : ";
		cin >> a;
		cout << "\nThe value of cosec("<< a <<") is " << 1/(sin((a*22)/(7*180)));
	}
	else if (choose==6)
	{
		cout << "Enter the angle in degrees to find out it's secant : ";
		cin >> a;
		cout << "\nThe value of sec("<< a <<") is " << 1/(cos((a*22)/(7*180)));
	}
	else
	{
		cout << "\nYou have entered a wrong choice.";
	}
	return main();
}

