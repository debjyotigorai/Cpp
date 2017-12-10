#include <iostream>
using namespace std;
int main()
{
	long int a, i, flag=0;
	cout << "\nEnter any number : ";
	cin >> a;
	for (i=2; i<a; i++)
	{
		if (a%i==0)
		flag = 1;
		break;
	}
	if (flag==0)
	{
		cout << "\nThe number is prime.";
	}
	else
	{
		cout << "\nThe number is not prime.";
	}
	return main();
}


