//larget even and odd number from a list of user input numbers.
#include <iostream>
using namespace std;
int main()
{
	int num, lodd=0, leven=0;
	cout << "\nEnter numbers and enter 0 to terminate : ";
	do
	{
		cin >> num;
		if (num%2==0)
		{
			if (num>leven)
			leven=num;
		}
		else
		{
			if (num>lodd)
			lodd=num;
		}
	}
	while (num!=0);
	if (lodd==0)
	{
		cout << "\nNo odd numbers entered.";
	}
	else 
	{
		cout << "\nThe largest odd number is : " << lodd;
	}
	if (leven==0)
	{
		cout << "\nNo even numbers entered.";
	}
	else 
	{
		cout << "\nThe largest even number is : " << leven;
	}
	return main();
}
