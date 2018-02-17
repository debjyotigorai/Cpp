#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char s[10] = { 0 };
    int i;
    for (i = 0; i < 10;i++) 
	{
        s[i] = _getch();
		_putch('*');
        if (s[i] == 13) 
		break;
    };
    if (s[]=={'p','r','o','j','e','c','t'})
    cout << "\nValid";
    getchar();
    return 0;

}
