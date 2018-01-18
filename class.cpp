#include <iostream>
using namespace std;

class Hello
{
	public :
		void output()
		{
			system ("cls");
			cout << "Hello World";
		}
};

int main()
{
	int a=65;
	char ch;
	do 
	{
		Hello (char)a;
		a.output();
		cout <<"\nRerun the program (Y/N) : ";
		cin >> ch;
	}
	while (ch=='Y'||'y');
	a++
}
