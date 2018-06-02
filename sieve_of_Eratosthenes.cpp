#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long int n;
	cout << "\nEnter the range : ";
	cin >> n;
	long int a[n];
	long int k=1;
	for (long int i=0; i<n; i++)
	{
		a[i]=k;
		k++;
	}
	a[0]=false;
	for (long int i=1; i<=pow(n,0.5); i++)
	{
		if (a[i]!=false)
		{
			for (long int j=i+1; j<n; j++)
			if(a[j]%a[i]==0)
			{
				a[j]=false;
			}
		}
	}
	cout << "\nThe prime numbers are : ";
	for (long int i=1; i<n; i++)
	{
		if (a[i]!=false)
			cout << a[i] << "\t";
	}
}
