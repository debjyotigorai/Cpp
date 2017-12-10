//Sum of all array values
#include <iostream>
using namespace std;
int main()
{
	int a[10], i;
	cout << "\nEnter 10 values : ";
	for (i=0; i<10; i++)
	{
		cin >> a[i];
	}
	int sum=0;
	for (i=0; i<10; i++)
	{
		sum+=a[i];
	}
	cout << "Sum is : " << sum;
	return main();
}
