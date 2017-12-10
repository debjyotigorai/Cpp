#include <iostream>
int main()
{
	using namespace std; 
	std::string name;
	std::cout<<"Enter your name : ";
	std::getline(cin, name);
	std::cout <<"Your name is : " << name;
}
