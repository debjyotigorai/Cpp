#include <iostream>
using namespace std;
int main()

{
	float basic, gross, net, HRA, DA, IT, trans, PF;
	cout << "\nEnter your basic salary : ";
	cin >> basic;
	cout << "\nEnter your HRA in % :";
	cin >> HRA;
	cout << "\nEnter your DA in % :";
	cin >> DA;
	cout << "\nEnter your IT in % :";
	cin >> IT;
	cout << "\nEnter your transport cost :";
	cin >> trans;
	cout << "\nEnter your PF in % :";
	cin >> PF;
	gross=basic+((HRA/100)*basic)+((DA/100)*basic)+trans;                             //gross salary = basic salary + HRA + DA + transport cost
	net=gross-((PF/100)*basic)-((IT/100)*basic);                                      //net salary = gross salary - PF -  IT
	cout << "\nYour gross salary is : " << gross << " and your net salary is : " <<net;
	return main();
}
/* HRA= House Rent Allowance
   DA = Dearness Allwance
   IT = Income Tax
   PF = Provident Fund
*/   
