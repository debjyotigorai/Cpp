//Count the Number of words  
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[80];
	cout << "\nEnter a string: ";
	cin.getline(str,80);
	int words = 0; // Holds number of words
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') //Checking for spaces
		{
			words++;
		} 		
	}
	cout << "The number of words = " << words+1;
	return main();
}
