#include <iostream>
using namespace std;
int main()
{
	int a[4][4], i, j, n;
	cout << "Enter values : ";
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		cin >> a[i][j];
	}
	cout << "Selection Menu : " << endl;
	cout << "1. Main Diagonal" << endl;
	cout << "2. Lower Half" << endl;
	cout << "3. Upper Half" << endl;
	cout << "Choose the correct option : ";
	cin >> n;
	switch (n)
	{
		case 1:
			for (i=0; i<4; i++)
			{
				for (j=0; j<4; j++)
				{
					if (i==j)
					cout << a[i][j] << "\t";
					else 
					cout << "\t";
				}
				cout << endl;
			}
			break;
		case 2:
			for (i=0; i<4; i++)
			{
				for (j=0; j<4; j++)
				{
					if ((i==j)||(i>=j))
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			break;
		case 3:
			for (i=0; i<4; i++)
			{
				for (j=0; j<4; j++)
				{
					if ((i==j)||(i<=j))
					cout << a[i][j] << "\t";
					else 
					cout << "\t";
				}
				cout << endl;
			}
			break;
		default : cout << "Wrong Option Entered. Try Again !";			
	}
	return main();
}
