//Constructor Overloading.
#include <iostream>
using namespace std;

class construct
{
	public :
		construct()
		{
			cout <<"\nNo parameter";
		}
		construct(int)
		{
			cout <<"\nOne parameter";
		}
		construct(int, char)
		{
			cout <<"\nOne int and one char parameter";
		}
		construct(int, int)
		{
			cout <<"\nTwo int parameter parameter";
		}
};

int main()
{
	construct c;
	construct c2(10);
	construct c3(10, 20);
	construct c4(10, 'C');
}
