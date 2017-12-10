//Check string whether it is palindrome or not.
#include <iostream>
using namespace std;
int main()
{
	char name[20];
	int i, j, length=0, flag=0;
	cout << "\nEnter a name : ";
	cin >> name;
	for (i=0; name[i]!='\0'; i++)
	length ++;
	for (i=0, j=length-1; i<length, j>=0; i++, j--)
	{
		if (name[i] != name[j])
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	cout << "Not Palindrome";
	else
	cout << "Palindrome";
	return main();
}
