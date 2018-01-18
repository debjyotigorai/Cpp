#include <iostream>
using namespace std;

int main()
{
	enum enum1 {True, False} flag;
	cout << "Enter a value : ";
	int n;
	cin >> n;
	flag=False;
	if (n>1) {
	for (int i=1;i<n; i++)
	{
		if (n%i!=0)
		flag=True;
	}
	if (flag==True)
	cout << "Prime";
	else if (flag==False)
	cout << "Not Prime"; }
	else
	cout << "Not Part of Prime numbers";
}
