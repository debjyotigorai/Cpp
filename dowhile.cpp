#include <iostream>
using namespace std;
int main()
{
	char ch;
	do
	{
		cout << "I am in the loop.";
		cout << "\nRerun the program (Y/N) : ";
		cin >> ch;
	}
	while (ch=='Y'||'y');
}
