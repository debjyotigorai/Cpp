/*
 Smartphone ZCO, 2014
 Debjyoti Gorai
*/
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() 
{
	int n;
	cin>>n;
	long long a[n], max=0, test;
	for(int i=0;i<n;++i)
	{
	    cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0;i<n;++i)
	{
	    test = a[i]*(n-i);
	    if(test>max)
	        max=test;
	}
	cout<<max;
	return 0;
}
