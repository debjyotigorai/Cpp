//Sort names according to alphabetical order
#include <iostream>
using namespace std;
int main()

{
	int n;
	cout << "Enter the no of names you want to enter : ";
	cin >> n;
	string a[n], temp="";
	int i, j, k=1;
	for (i=0; i<n; i++)
	{
		cout << k++ <<". ";
		cin.sync();
		getline (cin, a[i]);
	}
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i].compare(a[j])>0)
			{
				swap (a[i], a[j]);
			}
		}
	}
	k=1;
	cout << "The Sorted Names are : " << endl;
	for (i=0; i<n; i++)
	{
		cout << k++ << ". " << a[i] << endl;
	}
	return main();
}
