#include <iostream>
#include <stdio.h>
using namespace std;

swaplastfirst(int arr[], int size)
{
	int temp;
	temp=arr[0];
	arr[0]=arr[size-1];
	arr[size-1]=temp;
	cout << arr[0] << " , " << arr[size-1];
}

main()
{
	int a[5];
	cout << "\nEnter 5 values : ";
	for (int i=0; i<5; i++)
	cin >> a[i];
	cout << endl;
	swaplastfirst(a,5);
	return main();
}
