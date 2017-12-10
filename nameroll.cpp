#include <iostream>

using namespace std;

int main()

{
	string name = "";
	int roll;
	cout <<" Enter your Name : ";
	getline (cin, name);
	cout << " Enter your Roll No. : ";
	cin >> roll;
	cout << " Your name is " << name << " and your Roll No. is " << roll;
}
