// Average marks
#include <iostream>

using namespace std;

int main()

{
	float a, b, c, d, e, f;
	cout << "\n Enter the marks of Maths : ";
	cin >> a;  
	cout << "\n Enter the marks of English : ";
	cin >> b;  
	cout << "\n Enter the marks of Physics : ";
	cin >> c;  
	cout << "\n Enter the marks of Chemistry : ";
	cin >> d; 
	cout << "\n Enter the marks of Computer Science : ";
	cin >> e;
	f=(a+b+c+d+e)/5;
	cout << "\n Your average marks of 5 subjects are : " <<f;
	return 0;
}
