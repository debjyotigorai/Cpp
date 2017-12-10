//Swap two digit number
#include <iostream>
using namespace std;
int main()

{
	int a;
	int d;
	cout << "\nEnter two digit number :";
	cin >> a;
	if (a<10 || a>=100)
	{
		cout << "You have entered wrong data.";
	}
	else
	{
		d=10*(a%10)+a/10;
		cout <<d;
	}
	return main();
}
