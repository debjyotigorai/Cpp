/*
 Video Game ZCO, 2014
 Debjyoti Gorai
*/
#include <iostream>
#include <algorithm>

stack box
{
	long long level;
};

int crane(int k, box &b[], int n, int pos=0);
{
	if(k==pos)
		return
	else
	{
		if(k==1)
	}
}

int main()
{
	int n, h, k, pos;
	box b[n];
	for (int i=0; i<n; i++)
	{
		cin >> b[i].level;
	}
	cin >> k;
	pos=crane(k, b, n);
	while(k!=0)
	{
		cin >> k;
		pos=crane(k, b, n, pos);
		
	}
}

