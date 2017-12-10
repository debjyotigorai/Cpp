//Count the number of articles
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n;
	cout << "max range : ";
	cin >> n;
	char str[n];
	int a=0, an=0, the=0, articles;
	cout << "\nEnter a string: ";
	cin.sync();
	cin.getline(str,n);
	for(int i = 0; str[i] != '\0'; i++)
	{
		if ((i==0||str[i-1] == ' ')&&(str[i] == 'a'||str[i]=='A')&&(str[i+1]=='n')&&(str[i+2] == ' '||str[i+2]=='.'))
		{
			an++;
		}
		if ((i==0||str[i-1] == ' ')&&(str[i] == 'a'||str[i]=='A')&&(str[i+1] == ' '||str[i+1]=='.'))
		{
			a++;
			cout << str[i] << " ----  a = " << a << endl;
		}
		if ((i==0||str[i-1] == ' ')&&(str[i] == 't'||str[i]=='T')&&(str[i+1] == 'h')&&(str[i+2] == 'e')&&(str[i+3] == ' '||str[i+3]=='.')) 
		{
			the++;
		}		
	}
	articles=a+an+the;
	cout << "The number of articles = " << articles << endl;
	cout << "a = " << a << endl;
	cout << "an = " << an << endl;
	cout << "the = " << the << endl;
	return main();
	
}
