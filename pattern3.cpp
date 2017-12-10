#include <iostream>
using namespace std;
int main()
{
	char ch;
	int x, y;
	for (x=3; x>=1 ; x--)
	{
		cout << "\n";
		ch = 'A';
		for (y=1; y<=x; y++)
		{
			cout << ch;
			ch++;
		}
	}
	return 0;
}
