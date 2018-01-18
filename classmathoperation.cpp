#include <iostream>
using namespace std;

class inp
{
	protected :
		int a, b;	
};

class add : public inp
{
	public :
		adds()
		{
			cout << "\nSum : " << a+b;
		}	
};

class sub : public add
{
	public :
		subs()
		{
			cout <<"\nSubstraction : " << a-b;
		}
};

class div : public sub
{
	public :
		divs()
		{
			cout <<"\nDivision : " << a/b;
		}
};

class mult : public div
{
	public :
		mults()
		{
			cout <<"\nMultiplication : " << a*b;
		}
};

class operation : public mult
{
	public :
		operation()
		{
			cout <<"\nMathematical Operation : ";
		}
		input()
		{
			cout << "\nEnter two numbers : ";
			cin >> a >> b;
		}
};

main()
{
	operation o;
	o.input();
	o.adds();
	o.subs();
	o.divs();
	o.mults();
}
