#include <iostream>
#include <fstream>
using namespace std;

class fileoper
{
	private:
		char a[40], b[40];
	public :
		void fileio()
		{
			cout << "Enter a string : ";
			cin.getline(a,40);
			ofstream os("Ram.txt");
			os << a;
			os.close();
			cout << "\nDone......";
			ifstream is("Ram.txt");
			is.getline(b,40);
			cout << b;
			is.close();
		}	
};

int main()
{
	fileoper fio;
	fio.fileio();
}

