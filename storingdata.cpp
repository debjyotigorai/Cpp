//Storing data 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fobj;
	fobj.open("textfile.txt", ios::out);
	char a[40];
	cout << "Enter a string : ";
	cin.getline(a, 40); 
	fobj << a << endl;
	fobj.close();
	cout << "\nDone....";
}
