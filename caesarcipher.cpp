//Caesar Cipher
#include <iostream>
using namespace std;

int main()
{
	int key, i=0, cyphervalue;
	char plaintext[100];
	cout << "\nEnter the plain text: ";
	cin >> plaintext;
	cout << "\nEnter key: ";
	cin >> key;
	while(plaintext[i]!='\0')
	{
		cyphervalue=((((int)plaintext[i]-97)+key)%26)+97;
		plaintext[i]=(char)cyphervalue;
		i++;
	}
	cout << "\nThe ciphered text is: " << plaintext;
	i=0;
	while(plaintext[i]!='\0')
	{
		cyphervalue=((((int)plaintext[i]-97)-key)%26)+97;
		plaintext[i]=(char)cyphervalue;
		i++;
	}
	cout << "\nThe original text is: " << plaintext;
}
