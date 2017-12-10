#include <iostream>
using namespace std;
int main()
{
	char choice='Y';
	while(choice=='Y')
	{
		
		
	char o;
	long double a, b;
	cout << "\nEnter an operator (+,-,*,/) : ";
	cin >> o;
	cout << "\nEnter two numbers : "; 
	cin >> a >> b;
	switch (o)
	{
		case '+' :
			cout << a << " + " << b << " = " << a+b;
			break;
		case '-' :
			cout << a << " - " << b << " = " << a-b;
			break;
		case '*' :
			cout << a << " * " << b << " = " << a*b;
			break;
		case '/' :
			cout << a << " / " << b << " = " << a/b;
			break;
		default :
			cout << "\nError! You have entered a wrong operator. Please try again.";
			break;
	}
		
		
		cout << "\nRerun? Y/N :";
		cin >> choice;
	}
	return 0;
}
