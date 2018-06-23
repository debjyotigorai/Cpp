#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream op("vowel.txt", ios::in);
	char word[200];
	char str[500];
	while(op.getline(str, 500)!=NULL)
	{
		for (int i=0; str[i]!='\0'; i++)
		{
			if (str[i]==' '||str[i]=='.')
				str[i]='@';
			
		}
	}
}
