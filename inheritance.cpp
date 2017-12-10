//Multi level, single, multiple inheritence
#include <iostream>
using namespace std;

class add 
{
	protected :
		int a, b;
	
	public :
		adds()
		{
			cout << "\nEnter two numbers : ";
			cin >> a >> b;
			cout << "\nAddition : " << a+b;
		}
};

class sub : public add 
{
	public :
		subs()
		{
			cout << "\nSubstraction : " << a-b;
		}
};

class div 
{
	protected :
		int c, d;
		
	public :
		divs()
		{
			cout << "\nEnter two numbers : ";
			cin >> c >> d;
			cout << "\nDivision : " << c/d;
		}
};

class mult 
{
	protected :
		int e, f;
		
	public :
		mults()
		{
			cout << "\nEnter two numbers : ";
			cin >> e >> f;
			cout << "\nMultiplication : " << e*f;
		}
};

class arithk 
{
	public :
		arithk()
		{
			cout << "\nArithmetic Operations";
		}
		~arithk();
};

class arith : public sub, public div, public mult
{
	
};

main()
{
	arithk b; 
	arith a;
	a.adds();
	a.subs();
	a.divs();
	a.mults();
}


