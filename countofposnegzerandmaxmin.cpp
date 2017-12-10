//Count of +ve, -ve, zeroes and the smallest and largest number among it.
#include <iostream>
using namespace std;
int main()
{
	long long int range=0, cp=0, cn=0, cz=0, lpos=0, lneg=0, num, limit, lposs, lnegl, temp;
	cout << "\nEnter the count of numbers you want to enter : ";
	cin >> limit;
	if (limit<=0)
	{
		cout << "Aborting !!!";
	}
	else
	{
		limit--;
		cout << "Now enter the numbers : ";
		do
		{
			cin >> num;
			if (num>0)
			{
				cp++;
				if (num>lpos)
				{
					lpos=num;
				}
				else
				{
					lposs=num;
				}
			}
			else if (num<0)
			{
				cn++;
				if (num<lneg)
				{
					temp=num;
					lneg=num;
					if (temp>lneg)
					{
						lnegl=num;
					}
				}
			}
			else
			{
				cz++;
			}
			range++;
		}
		while (range<=limit);
		cout << "The count of positive numbers is : " << cp;
		cout << "\nThe count of negative numbers is : " << cn;
		cout << "\nThe count of zeroes is : " << cz;
		if (cp==0 && cz==0)
		{
			cout << "\nThe largest number is : " << lnegl;
		}
		else if (cp==0 && cz>0)
		{
			cout << "\nThe largest number is : 0";
		}
		else
		{
			cout << "\nThe largest number is : " << lpos;
		}
		if (cn==0 && cz==0)
		{
			cout << "\nThe smallest number is : " << lposs;
		}
		else if (cn==0 && cz>0)
		{
			cout <<"\nThe smallest number is : 0"; 
		}
		else
		{
			cout <<"\nThe smallest number is : " << lneg;
		}
	}
	return main();
}
