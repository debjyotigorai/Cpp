#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char password[100];
	int i = 0;
    char a;
    while(1)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
        {
            password[i]=a;
            ++i;
            cout <<"*";
        }
        if(a=='@'||a=='#'||a=='?'||a==' '||a=='%'||a=='!'||a=='-'||a=='_'||a=='$'||a=='&'||a=='^'||a=='*')
        {
        	password[i]=a;
        	++i;
        	cout << "*";
		}
        if(a=='\b'&&i>=1)
        {
            cout << "\b \b";
            --i;
        }
        if(a=='\r')
        {
            password[i]='\0';
            break;
        }
    }
    cout << endl << password;

}
