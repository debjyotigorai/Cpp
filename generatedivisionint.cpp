#include <iostream>
using namespace std;
int main()
{
	int i, num;
	cout << "\nEnter any number : ";
	cin >> num;
	for (i=1; i<=num/2; ++i)
	{
		if (num%i==0)
		cout << "\n" << i;
	}
	return main();
}
