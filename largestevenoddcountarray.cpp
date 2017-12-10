//Largest even odd and count of them in array.
#include <iostream>
using namespace std;
int main()
{
	int a[10], ceven=0, codd=0, leven=0, lodd=0, i;
	cout <<"\nEnter 10 positive values : ";
	for (i=0; i<10; i++)
	{
		cin >> a[i];
	}
	for (i=0; i<10; i++)
	{
		if (a[i]%2==0)
		{
			ceven++;
			if (a[i]>leven)
			leven=a[i];
		}
		else
		{
			codd++;
			if (a[i]>lodd)
			lodd=a[i];
		}
	}
	cout << "The no of even numbers entered is : " << ceven;
	cout << "\nThe no of odd numbers entered is : " << codd;
	if (leven==0)
	cout << "\nNo even numbers entered.";
	else
	cout << "\nThe largest even number is : " << leven;
	if (lodd==0)
	cout << "\nNo odd numbers entered.";
	else
	cout << "\nThe largest odd number is : " << lodd;
	return main();
}
