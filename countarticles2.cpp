//Count the no. of an in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1="";
	size_t f_an_1=0;
	int an_count=0, i;
	cout << "Enter a sentence : ";
	getline (cin, s1);
	//cout << " String length = " << s1.length();
	for (i=0; f_an_1 != string::npos; i=i+(f_an_1)+4)
	{
		f_an_1 = s1.find(" an ", i, 4);
		//cout << " Find an Format < an > : " <<f_an_1 << endl;
		i=i+(f_an_1)+2;
		//cout << "Value of i = " << i;
		if(f_an_1 != string::npos)
		an_count++;
	}
	
	f_an_1=0;
	for (i=0; f_an_1 != string::npos; i=i+(f_an_1)+3)
	{
		f_an_1 = s1.find("An ", i, 3);
		//cout << " Find an Format < an > : " <<f_an_1 << endl;
		i=i+(f_an_1)+2;
		//cout << "Value of i = " << i;
		if(f_an_1 != string::npos) 
		 an_count++;
	}
	
	f_an_1=0;
	for (i=0; f_an_1 != string::npos; i=i+(f_an_1)+4)
	{
		f_an_1 = s1.find(" An ", i, 4);
		//cout << " Find an Format < an > : " <<f_an_1 << endl;
		i=i+(f_an_1)+2;
		//cout << "Value of i = " << i;
		if(f_an_1 != string::npos)
		an_count++;
	} 
	cout << "An count is : " << an_count++;
	return 0;
}
