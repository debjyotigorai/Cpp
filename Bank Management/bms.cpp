//BANK MANAGEMENT SOFTWARE
//This program is created by Debjyoti Gorai for school investigatory project and for sole purposes in 2018.
//This program is owned solely by Debjyoti Gorai.
//Editing the program is not allowed. Read the about section of the program for more details.

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <direct.h>

using namespace std;

class account_holder
{
	string username, password;
	char status;
	public: 
		char return_status()
		{
			return status;
		}
		string return_username()
		{
			return username;
		}
		string return_password()
		{
			return password;
		}
		void creation_2()
		{
			cout << "\nCreate a username: ";
			cin >> ws;
			getline(cin, username);
			cout << "\nCreate a password: ";
			cin >> ws;
			getline(cin, password);
			status='Y';
			cout << "\n....ACCOUNT CREATION SUCCESSFULL....";
		}
};

class account_creation_view
{
	string name, email, address, guardian_name, accno, phoneno;
	double birth_year, balance;
	public:
		void creation()
		{
			cout << "\nPERSONAL DETAILS: ";
			cout << "\nEnter name: ";
			cin >> ws;
			getline(cin, name);
			cout << "\nEnter year of birth: ";
			cin >> birth_year;
			cout << "\nEnter residential address: ";
			cin >> ws;
			getline(cin, address);
			cout << "\nEnter your's father/ mother's name: ";
			cin >> ws;
			getline(cin, guardian_name);
			cout << "\nEnter your phone number: ";
			cin >> ws;
			getline(cin, phoneno);
			cout << "\nEnter your email address: ";
			cin >> ws;
			getline(cin, email);
			cout << "\nBANK ACCOUNT CREATION: ";
			cout << "\nEnter your account number: ";
			cin >> ws;
			getline(cin, accno);
			cout << "\nEnter your deposit balance: ";
			cin >> balance;	
		}
		void view()
		{
			cout << "\nACCOUNT DETAILS: "
			     << "\nAccount number : " << accno
			     << "\nCurrent balance: " << balance;
			cout << "\nPERSONAL DETAILS:"
			     << "\nName: " << name
			     << "\nYear of birth: " << birth_year
			     << "\nGuardian's name: " << guardian_name
			     << "\nAddress: " << address
			     << "\nPhone number: " << phoneno
			     << "\nEmail: " << email;
		}
		
};

void login()
{
	//Function for login using username and password
	int flag=0;
	account_holder ach;
	string temp_username, temp_password;
	cout << "\nEnter your username: ";
	cin >> ws;
	getline(cin, temp_username);
	cout << "\nEnter your password: ";
	cin >> ws;
	getline(cin, temp_password);
	fstream fin("account_holder.dat", ios::in);
	fin.read((char *)&ach, sizeof(ach));
	while(!fin.eof())
	{
		if((ach.return_username()==temp_username)&&(ach.return_password()==temp_password))
		{
			flag=1;
			break;
		}
		fin.read((char *)&ach, sizeof(ach));		
	}
	if (flag==1)
	{
		if (ach.return_status()=='Y')
			{
				chdir(ach.return_username().c_str());
				cout << "\nLogin Successfull.";
				account_creation_view acv;
				fstream fin("account_details.dat", ios::in);
				fin.read((char *)&acv, sizeof(acv));
				acv.view();
			}
		else if (ach.return_status()=='N')
			{
				cout << "\nAccount has been closed by you or by the bank.";
			}
	}
	else
		cout << "\nNo account has been created with us. Please create a new account.";
}

void account_write()
{
	//Function to write username and password into a file and account details into another file
	account_holder obj1;
	account_creation_view obj;
	obj.creation();
	obj1.creation_2();
	fstream fout("account_holder.dat", ios::out|ios::app);
	fout.write((char *)&obj1, sizeof(obj1));
	fout.close();
	mkdir(obj1.return_username().c_str());
	chdir(obj1.return_username().c_str());
	fstream fout1("account_details.dat", ios::out|ios::app);
	fout1.write((char *)&obj, sizeof(obj));
	//fstream fout2("account_statement.dat", ios::out);
	fout1.close();
	//fout2.close();
	chdir("..\\");
}
class ADMINISTRATOR_MENU
{
	
};

class BANKING_MENU
{
	int no;
	public :
		BANKING_MENU()
		{
			lb:
			cout << "\nBANKING MENU: "
			     << "\n1. Login to your account."
			     << "\n2. Create a new account."
			     << "\n3. Goto home."
			     << "\nEnter your choice: ";
			cin >> no;
			switch (no)
			{
				case 1: 
					login();
					break;
				case 2: 
					account_write();
					break;
					
				case 3: break;
					
				default: 
					cout << "\nWrong choice! Try again.";
					goto lb;
			}
		}
};

void about()
{
	//Function to see the about section of the program
	fstream about_out("bms_about.txt", ios::in);
	string about_str;
	cout << "\n\n==========================================================================================\n\n";
	while (!about_out.eof())
	{
		getline(about_out, about_str);
		cout << about_str << endl;
	}
	cout << "\n==========================================================================================\n";
	about_out.close();
}

int main()
{
	system("COLOR 8F");
	char date[10];
	cout <<"\n                                   **** BANK MANAGEMENT SOFTWARE ****                                   " << _strdate(date);
	lb:
	cout << "\nEnter program password: ";
	char program_password[32];
	int i = 0;
    char a;
    while(1)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
        {
            program_password[i]=a;
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)
        {
            cout<<"\b \b";
            --i;
        }
        if(a=='\r')
        {
            program_password[i]='\0';
            break;
        }
    }
	if (strcmp(program_password, "project")==0||strcmp(program_password, "admin")==0)
		{
			while(1)
			{
				cout << "\a";
				int choice;
				cout << "\nMAIN MENU"
					 << "\n1. Banking."
					 << "\n2. Administrator Menu."
					 << "\n3. About"
					 << "\n4. Exit Program."
					 << "\nENTER YOUR CHOICE: ";
				cin >> choice;
				switch(choice)
				{
					case 1: 
						BANKING_MENU();
						break;
						
					case 2:
					
					case 3:
						about();
						break;
					
					case 4: 
						Sleep (500);
						cout << "\n\nExiting ";
						for (int i=0; i<=4; i++)
						{
							Sleep (500);
							cout << ".";
						}
						exit(0);
						break;
					
					default:
						cout << "\nYou have entered a wrong choice. Try again.";
				}
			}	 	
		}
	else
		cout << "\nYou have entered a wrong password. Try again.";
		goto lb;
}
