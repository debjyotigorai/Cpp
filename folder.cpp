#include <iostream>
#include <direct.h>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	string foldername;
	cout << "\nEnter foldername: ";
	getline(cin, foldername);
	mkdir(foldername.c_str());
	chdir(foldername.c_str());
	fstream fout("ram.txt", ios::out);
	fout << foldername << "=Over_write";
	fout.close();
	cout << "\n.....FOLDER CREATED.....";
	chdir(2);
	fstream fout1("shyam.txt", ios::out);
	fout1 << foldername << "=New";
	fout1.close();
	
	/*string foldername1;
	cout << "\nEnter foldername 1: ";
	cin.sync();
	getline(cin, foldername1);
	string temp="cd.. && md ";
	string s3=temp + foldername1;
	cout << s3 << endl;
	cout << foldername1 << endl;
	system(s3.c_str());*/
}

