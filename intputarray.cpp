#include <iostream>
using namespace std;
int main()/*
{
	int n, i;
	cout <<"Enter the count of numbers you want to enter : ";
	cin >> n;
	int a[n];
	cout << "Enter array values : ";
	for (i=0; i<n; i++)
	cin >> a[i];
	for (i=0; i<n; i++)
	cout << a[i] << "\t";
	return main();
} */
{
	int *a, i, n;
	cout << "\nEnter the count of numbers you want to enter : ";
	cin >> n;
	a= new int[n];
	cout << "Enter array values : ";
	for (i=0; i<n; i++)
	cin >> a[i];
	cout << "The values are : " << endl;
	for (i=0; i<n; i++)
	cout << a[i] << "\t";
	delete a;
	return main();
}
