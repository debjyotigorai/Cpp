//Check Palindrome
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1 = "", s2 = "";
	cout << "\nEnter a string : ";
	getline(cin, s1);
	s2=s1;
	reverse(s2.begin(),s2.end());
	if (s2==s1)
	cout << "Palindrome";
	else
	cout << "Not palindrome.";
	return main();
}
