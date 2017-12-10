//Count the no. of an in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1="";
	int an_count=0, i;
	cout << "Enter a sentence : ";
	getline (cin, s1);
	cout << " String length = " << s1.length();
	for (i=0; i<s1.length(); )
	{
		size_t f_an_1 = s1.find(" an ", i, 4);
		cout << " Find an Format < an > : " << (int)f_an_1 << endl;
		size_t f_an_2 = s1.find("An ", i, 3);
		cout << " Find an Format <An > : " << f_an_2 << endl;
		size_t f_an_3 = s1.find(" An ", i, 4);
		cout << " Find an Format < An > : " << f_an_3 << endl;
		cout << "No Position value " << string::npos;
		break;
		if (f_an_1 != string::npos)
		{
			an_count++;
			i=i+((int)f_an_1)+2;
		}
		if (f_an_2 != string::npos)
		{
			an_count++;
			i=i+((int)f_an_2)+2;
		}
		if (f_an_3 != string::npos)
		{
			an_count++;
			i=i+((int)f_an_3)+2;
		}
	}
	cout << "An count is : " << an_count++;
	return 0;
}
