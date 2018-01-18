#include<iostream>
using namespace std;

class ComplexNumber
{
	private:
		float img1, real1,img2, real2;
	public:
		friend class Add; 
};

class Add
{
	public:
		void findSum()
		{
			ComplexNumber cn;
			cout<<"Enter real and img part for complex no1:";
			cin>>cn.real1>>cn.img1;
			cout<<"Enter real and img part for complex no2:";
			cin>>cn.real2>>cn.img2;
			
			cout<<"Sum is=>"<<cn.real1+cn.real2<<"+"<<cn.img1+cn.img2<<"i";
		}		
};

int main()
{
	Add a1;
	a1.findSum();
	return 0;
}
