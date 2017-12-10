#include <iostream>
using namespace std;
int main()
{
	const int ar=40;
	char name[ar];
	cout << "Enter your name : ";
	cin.get(name, ar).get();
	cout << "Your name is : " << name;
	
}
