#include <iostream>
using namespace std;
int main()
{
	int i, sum;
	for (i=1; i<=10; i++)
	{
		if (i==10)
		cout << i;
		else 
		cout << i << "+";
		sum+=i;
	}
	cout << " = " <<sum;
}
