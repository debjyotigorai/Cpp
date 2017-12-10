#include <iostream>
using namespace std;
int main()

{
	string name = "", address1 = "", address2 = "", city = "", phone= "";
	float PIN;
	cout << "\nEnter your name : ";
	getline(cin,name);
	cout << "\nEnter your address 1 : ";
	getline(cin,address1);
	cout <<"\nEnter your address 2 : ";
	getline(cin,address2);
	cout << "\nEnter your city : ";
	getline(cin,city);
	cout << "\nEnter your phone no. : ";
	getline(cin, phone);
	cout << "\nEnter your PIN/ZIP : ";
	cin >> PIN;
	cout << "\nYour name is :" << name;
	cout << "\nYour address is : " << address1 <<", " << address2;
	cout << "\nYour city is : " << city;
	cout << "\nYour phone no is " << phone;
	cout << "\nYour PIN is : " << PIN;
	return 0;
}
