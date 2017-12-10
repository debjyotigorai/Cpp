//Structure Students
#include <iostream>
using namespace std;

struct student
{
	string name;
	int roll;
	float marks;
	char grade;
};
int main()
{
	int n, i, range=0;
	cout << "\nEnter the number of students : ";
	cin >> n;
	struct student a[n];
	cout << "Enter the data against your respective students - \n";
	string name1;
	for (i=0; i<n; i++)
	{
		cout << "Name : ";
		cin.sync();
		getline (cin, name1);
		a[i].name=name1;
		cout << "Roll : ";
		cin >> a[i].roll;
		cout << "Marks : ";
		cin >> a[i].marks;
		cout << "Grade : ";
		cin >> a[i].grade;
		cout << "\n";
	}
	int choice;
	cout << "Choice List" <<endl;
	cout << "Print all : 1 " << endl;
	cout << "Search by full name : 2 " << endl; 
	cout << "Search by roll no. : 3 " << endl;
	cout << "Search by marks : 4 " << endl;
	cout << "Search by grade : 5 " << endl;
	cout << "Enter your correct choice number : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		{
			for (i=0; i<n; i++)
			{
				cout << "Name : " << a[i].name << endl;
				cout << "Roll : " << a[i].roll << endl;
				cout << "Marks : " << a[i].marks << endl;
				cout << "Grade : " << a[i].grade << endl;
				cout << "\n";
			}
			break;
		}
	case 2:
		{
			string name_search;
			int flag=0;
			cout << "Enter the name : ";
			cin.sync();
			getline(cin, name_search);
			for (i=0; i<n; i++)
			{
				if ( name_search.compare(a[i].name)==0)
				{
					range++;
					cout << "Name : " << a[i].name << endl;
					cout << "Roll : " << a[i].roll << endl;
					cout << "Marks : " << a[i].marks << endl;
					cout << "Grade : " << a[i].grade << endl;
					cout << "\n";
				}
				
			}
			if (range==0)
				cout <<"No matching record data found.";
			break;
		}
	case 3 :
		{
			int roll_search, flag=0;
			cout << "Enter the roll number : ";
			cin >> roll_search;
			for (i=0; i<n; i++)
			{
				if (a[i].roll==roll_search)
				{
					range++;
					cout << "Name : " << a[i].name << endl;
					cout << "Roll : " << a[i].roll << endl;
					cout << "Marks : " << a[i].marks << endl;
					cout << "Grade : " << a[i].grade << endl;
					cout << "\n";
				}
			}
			if (range==0)
				cout <<"No matching record data found.";
			break;	
		}
	case 4 :
		{
			int marks_search, flag=0;
			cout << "Enter the marks : ";
			cin >> marks_search;
			for (i=0; i<n; i++)
			{
				if (a[i].marks==marks_search)
				{
					range++;
					cout << "Name : " << a[i].name << endl;
					cout << "Roll : " << a[i].roll << endl;
					cout << "Marks : " << a[i].marks << endl;
					cout << "Grade : " << a[i].grade << endl;
					cout << "\n";
				}
			}
			if (range==0)
				cout <<"No matching record data found.";	
			break;
		}
	case 5 : 
		{
			char grade_search; 
			int flag=0;
			cout << "Enter the grade : ";
			cin >> grade_search;
			for (i=0; i<n; i++)
			{
				if (a[i].grade==grade_search)
				{
					range++;
					cout << "Name : " << a[i].name << endl;
					cout << "Roll : " << a[i].roll << endl;
					cout << "Marks : " << a[i].marks << endl;
					cout << "Grade : " << a[i].grade << endl;
					cout << "\n";
				}
			}
			if (range==0)
				cout <<"No matching record data found.";
			break;
		}
	default :
		{
			cout << "Error !! Wrong Option Entered !!";
			break;
		}			
	}
	return main();	
}
