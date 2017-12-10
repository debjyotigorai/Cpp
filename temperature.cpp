// Temperature converter from Celsius to Farenheit
#include <iostream>

using namespace std;

int main ()

{
	float c, f;
	cout << "Enter the magnitude of tempeature in Celsius : ";
	cin >> c;
	f = (c*9)/5+32;
	cout << "The temperature in Farenheit is : " <<f;
	return 0;
}
