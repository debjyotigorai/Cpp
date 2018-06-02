#include <iostream>
using namespace std;

struct student
{
	int a, b;
	struct sub_student
	{
		int c, d;
	};
};

int main()
{
	student::sub_student s2;
	cout << "\nSize of s2: " << sizeof(s2);
}
