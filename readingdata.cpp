//Reading data
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fobj1;
	fobj1.open("textfile.txt", ios::in);
	if (!fobj1)
	{
		cout << "Unable to open file.";
		exit(0);
	}
	else 
	{
		char b[40];
		fobj1.getline(b,40);
		cout << "\nData = " << b << endl;
		fobj1.close();
	}
}
