#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, g, h, i, j;
	cout << "\nEnter any 5 numbers : " << endl;
	cin >> a >> b >> c >> d >> e;
	g=(a>b)?((a>c)?((a>d)?((a>e)?a:e):d):c):b;
	h=(b>c)?((b>d)?((b>e)?b:e):d):c;
	i=(c>d)?((d>e)?d:e):c;
	j=(g>h)?((g>i)?g:i):((h>i)?h:i);
	cout << j;
	return main();
}
