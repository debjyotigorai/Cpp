#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
int main()
{
	int c=0;
	time_t t;
  	srand((unsigned)time(&t));
  	while(c<100)
  	{
  		double accno=(rand() % (1000000-100000)) + 100000;
  		c++;
  		cout << accno << endl;
	}
}*/
int main()
{
	fstream fin("school.dat", ios::in|ios::out);
	fin << "hello";
}
