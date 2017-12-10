#include <iostream>
using namespace std;
 
int main()
{
 
  long long int num1, num2;
 
  cout<<"Enter an integer: ";
  cin>>num1;
  cout<<"Enter another integer: ";
  cin>>num2;
 
  long long int total = 0;
  for (long long int x=num1; x<=num2; x++)
  {
 
         total += x;
 
  }  
 
  cout<<"The sum of the integers between the two numbers is "<< total;

}

