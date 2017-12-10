//Temperature converter.
#include <iostream>
using namespace std;
int main()
{
	long double choose;
	long double c,f,k;
	cout << "\n\n|| THIS PROGRAM IS CREATED IN Dev-C++ AND IS OWNED BY DEBJYOTI GORAI.   || ";
	cout << "\n|| YOU ARE PROHIBITED TO EDIT OR COPY THE CODE OF THE PROGRAM.          || ";
	cout << "\n|| BUT YOU CAN SHARE OR DISTRIBUTE IT AMONG OTHERS.                     ||\n\n";
	cout << "\nTemperature conversion menu";
	cout << "\n1. Fahrenheit to Celsius";
	cout << "\n2. Celsius to Fahrenheit";
	cout << "\n3. Celcius to Kelvin";
	cout << "\n4. Kelvin to Celsius";
	cout << "\n5. Fahrenheit to Kelvin";
	cout << "\n6. Kelvin to Fahrenheit";
	cout << "\nChoose option 1/2/3/4/5/6 : ";
	cin >> choose;
	if (choose==1)
	{
		cout << "\nEnter the magnitude of temperature in Fahrenheit : ";
		cin >> f;
		c=(f-32)*5/9;
		cout << "\nThe temperature is : " << c;
	}
	else if (choose==2)
	{
		cout << "\nEnter the magnitude of temperature in Celsius : ";
		cin >> c;
		f=(c*9)/5+32;
		cout << "\nThe temperature is : " << f;
	}
	else if (choose==3)
	{
		cout << "\nEnter the magnitude of temperature in Celcius : ";
		cin >> c;
		k=c+273.15;
		cout << "\nThe temperature is : " << k;
	}
	else if (choose==4)
	{
		cout << "\nEnter the magnitude of temperature in Kelvin : ";
		cin >> k;
		c=k-273.15;
		cout << "\nThe temperature is : " << c;
	}
    else if (choose==5)
    {
    	cout << "\nEnter the magnitude of temperature in Farenheit : ";
    	cin >> f;
    	c=(f-32)*5/9;
    	k=c+273.15;
    	cout << "\nThe temperature is : " << k;
	}
	else if (choose==6)
    {
    	cout << "\nEnter the magnitude of temperature in Kelvin : ";
    	cin >> k;
    	c=k-273.15;
    	f=(c*9)/5+32;
    	cout << "\nThe temperature is : " << f;
	}
	else 
	{
		cout << "\nYou have entered a wrong choice. Please try again.";
	}
	return main();
	
}
