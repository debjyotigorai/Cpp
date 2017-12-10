#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    long double base, result = 1;
    cout << "\nEnter base and exponent respectively:  ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = ";
    while (exponent!=0)
	{
        result *= base;
        --exponent;
    }
    cout << result;
    return main();
}
