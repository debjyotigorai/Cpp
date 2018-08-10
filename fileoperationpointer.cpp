#include <iostream>
#include <fstream>

using namespace std;

class toys
{
	int no, cost;
	public: 
		void getdata()
		{
			cout << "\nEnter serial no: ";
			cin >> no;
			cout << "\nEnter cost: ";
			cin >> cost;
		}
		void view()
		{
			cout << "\nSerial no: " << no;
			cout << "\nCost: " << cost;
		}
};

void writedata()
{
	toys t;
	t.getdata();
	fstream fout("toys.dat", ios::out|ios::app);
	fout.write((char *)&t, sizeof(t));
	fout.close();
}

void readdata()
{
	toys t;
	fstream fin("toys.dat", ios::in);
	fin.read((char *)&t, sizeof(t));
	while(!fin.eof())
	{
		t.view();
		fin.read((char *)&t, sizeof(t));
	}
	fin.close();
}

int main()
{
	while(1)
	{
		cout << "\n\nMenu: "
	     << "\n1. Write data."
	     << "\n2. Read data."
	     << "\nEnter your choice (1 or 2): ";
		int choose;
		cin >> choose;
		switch(choose)
		{
			case 1: writedata();
					break;
					
			case 2: readdata();
					break;
			
			default: cout << "\nWrong choice. Try again."; 
					exit(0);
		}
	}
	return 0;
}
