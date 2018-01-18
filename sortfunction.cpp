//sort() function performs the qshort(quick short)
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int r[]= {1,3,2,0}, n, i;
	n=sizeof(r)/sizeof(int);
	sort(r, r+n);
	for (i=0; i<n; i++)
		cout << r[i] << "\t";
}
