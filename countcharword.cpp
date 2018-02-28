#include <iostream>
using namespace std;

int main()
{
	char str[50];
	int word_count=0, char_count=0;
	cout << "\nEnter a string : ";
	cin.getline(str, 50);
	for (int i=0; str[i]!='\0'; i++)
	{
		if (str[i]==' ')
		word_count++;
		char_count++;
	}
	cout << "\nNumber of words : " << ++word_count;
	cout << "\nNumber of characters : " << char_count;
}
