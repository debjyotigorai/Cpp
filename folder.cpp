#include <iostream>
#include <direct.h>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	char foldername[40];
	cout << "\nEnter foldername: ";
	cin.sync();
	cin.getline(foldername, 40);
	mkdir(foldername);
	chdir(foldername);
	
}

