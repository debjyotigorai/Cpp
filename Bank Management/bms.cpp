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

char * crypt_pass()
{
	char password[100];
	int i = 0;
    char a;
    while(1)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
        {
            password[i]=a;
            ++i;
            cout << "*";
        }
        if(a=='@'||a=='#'||a=='?'||a==' '||a=='%'||a=='!'||a=='-'||a=='_'||a=='$'||a=='&'||a=='^'||a=='*')
        {
        	password[i]=a;
        	++i;
        	cout << "*";
		}
        if(a=='\b'&&i>=1)
        {
            cout << "\b \b";
            --i;
        }
        if(a=='\r')
        {
            password[i]='\0';
            break;
        }
    }
    return password;
}

class account_holder
{
	char username[100], password[100], question[200], answer[100];
	char status;
	public: 
		char * return_question()
		{
			return question;
		}
		char * return_answer()
		{
			return answer;
		}
		char return_status()
		{
			return status;
		}
		char * return_username()
		{
			return username;
		}
		char * return_password()
		{
			return password;
		}
		void change_status_N()
		{
			status='N';
		}
		void change_status_Y()
		{
			status='Y';
		}
		void creation_2()
		{
			menu:
			int flag=0;
			cout << "\nCreate a username: ";
			cin.sync();
			cin.getline(username, 100);
			fstream fin("account_holder.dat", ios::in);
			if(fin)
			{
				while(!fin.eof())
				{
					account_holder temp;
					fin.read((char *)&temp, sizeof(temp));
					if(strcmp(temp.return_username(), username)==0)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==1)
			{
				cout << "\nThe username already exists. Create a different one.";
				goto menu;
			}
			cout << "\nCreate a password: ";
			cin.sync();
			strcpy(password, crypt_pass());
			status='Y';
			cout << "\nEnter a security question: ";
			cin.sync();
			cin.getline(question, 200);
			cout << "\nChoose a answer for your question: ";
			cin.sync();
			cin.getline(answer, 100);
			cout << "\n....ACCOUNT CREATION SUCCESSFULL....";
		}
};

class account_creation_view
{
	char name[100], email[100], address[100], guardian_name[100], phoneno[20], accno[50];
	double birth_year, balance;
	public:
		void creation()
		{
			cout << "\nPERSONAL DETAILS: ";
			cout << "\nEnter name: ";
			cin.sync();
			cin.getline(name, 100);
			cout << "\nEnter year of birth: ";
			cin >> birth_year;
			cout << "\nEnter residential address: ";
			cin.sync();
			cin.getline(address, 100);
			cout << "\nEnter your's father/ mother's name: ";
			cin.sync();
			cin.getline(guardian_name, 100);
			cout << "\nEnter your phone number: ";
			cin.sync();
			cin.getline(phoneno, 20);
			cout << "\nEnter your email address: ";
			cin.sync();
			cin.getline(email, 100);
			cout << "\nBANK ACCOUNT CREATION: ";
			cout << "\nEnter your account number: ";
			cin.sync();
			cin.getline(accno, 50);
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
		void edit()
		{
			edit_lb:
			int choose;
			cout << "\nEditing Menu: "
				 << "\n1. Edit name."
				 << "\n2. Edit email."
				 << "\n3. Edit address."
				 << "\n4. Edit guardian name."
				 << "\n5. Edit phone number."
				 << "\n6. Edit birth year."
				 << "\n7. Done."
				 << "\nEnter correct choice: ";
			cin >> choose;
			switch (choose)
			{
				case 1: cout << "\nEnter new name: ";
						cin.sync();
						cin.getline(name, 100);
						goto edit_lb;
				case 2: cout << "\nEnter your email address: ";
						cin.sync();
						cin.getline(email, 100);
						goto edit_lb;
				case 3: cout << "\nEnter residential address: ";
						cin.sync();
						cin.getline(address, 100);
						goto edit_lb;
				case 4: cout << "\nEnter your's father/ mother's name: ";
						cin.sync();
						cin.getline(guardian_name, 100);
						goto edit_lb;
				case 5: cout << "\nEnter your phone number: ";
						cin.sync();
						cin.getline(phoneno, 20);
						goto edit_lb;
				case 6: cout << "\nEnter year of birth: ";
						cin >> birth_year;
						goto edit_lb;
				case 7: cout << "\n....Updating Done....";
						break;
				default: cout << "\nWrong choice entered. Try again.";
						 goto edit_lb;	
			}
		}
};

void close_account(char username[])
{
	account_holder ah;
	int flag=0, pos;
	fstream fin("account_holder.dat", ios::in);
	while(!fin.eof())
	{
		pos=fin.tellg();
		fin.read((char *)&ah, sizeof(ah));
		if(strcmp(username, ah.return_username())==0)
		{
			flag=1;
			break;
		}			
	}
	fin.close();
	if (flag==1)
	{
		ah.change_status_N();
		fstream fout("account_holder.dat", ios::out);
		fout.seekg(pos);
		fout.write((char *)&ah, sizeof(ah));
		fout.seekg(0);
		fout.close();	
	}
}

void reopen_account()
{
	char temp_username[100], temp_password[100], temp_answer[100];
	int flag=0, pos;
	cout << "\nEnter your username: ";
	cin.sync();
	cin.getline(temp_username, 100);
	cout << "\nEnter your password: ";
	cin.sync();
	strcpy(temp_password, crypt_pass());
	account_holder ah;
	fstream fin("account_holder.dat", ios::in);
	while(!fin.eof())
	{
		pos=fin.tellg();
		fin.read((char *)&ah, sizeof(ah));
		if ((strcmp(ah.return_username(), temp_username)==0)&&(strcmp(ah.return_password(), temp_password)==0))
		{
			flag=1;
			break;
		}
	}
	fin.close();
	if (flag==0)
	{
		cout << "\nNo such account exists with us. Create a new one.";
	}
	if (flag==1)
	{
		if (ah.return_status()=='N')
		{
			cout << "\nSecurity Question: " << endl;
			cout << ah.return_question();
			cout << "\nEnter your answer to your question: " << endl;
			cin.sync();
			cin.getline(temp_answer, 100);
			if (strcmp(ah.return_answer(), temp_answer)==0)
			{
				ah.change_status_Y();
				fstream fout("account_holder.dat", ios::out);
				fout.seekg(pos);
				fout.write((char *)&ah, sizeof(ah));
				cout << "\nYour account has been reopened.";
				fout.seekg(0);
				fout.close();
			}
			else 
			{
				cout << "\nWrong answer. Try again!";
			}
		}
		else
		{
			cout << "\nYour account is already opened.";
		}
	}
}

void login_menu(char username[])
{
	int choose;
	lb: 
	cout << "\nWelcome " << username << " : "
		 << "\n1. View account details."
		 << "\n2. Edit personal details."
		 << "\n3. Close your account."
		 << "\n4. Logout."
		 << "\nEnter correct choice: ";
	cin >> choose;
	switch (choose)
	{
		case 1: 
		{
			account_creation_view acv;
			fstream fin("account_details.dat", ios::in);
			fin.read((char *)&acv, sizeof(acv));
			acv.view();
			fin.close();
			goto lb;
		}
		case 2:		
		{
			account_creation_view acv;
			fstream fin("account_details.dat", ios::in);
			fin.read((char *)&acv, sizeof(acv));
			fin.close();
			fstream fout("account_details.dat", ios::out);
			acv.edit();
			fout.seekg(0);
			fout.write((char *)&acv, sizeof(acv));
			fout.close();
			goto lb;	
		}
		case 3: 
		{
			char choice;
			cout << "\nAre you sure you want to close your account (Y/N): ";
			cin >> choice;
			if (choice=='Y'||choice=='y')
			{
				chdir("..\\");
				close_account(username);
				cout << "\nAccount closed.";
				break;
			}
			else
				goto lb;
		}
		case 4: cout << "\nLogging out ...";
				break;
		default: cout << "\nWrong choice entered. Try again.";
				 goto lb;
	}
}

void login()
{
	//Function for login using username and password
	int flag=0;
	account_holder ach;
	char temp_username[100], temp_password[100];
	cout << "\nEnter your username: ";
	cin.sync();
	cin.getline(temp_username, 100);
	cout << "\nEnter your password: ";
	cin.sync();
	strcpy(temp_password, crypt_pass());
	fstream fin("account_holder.dat", ios::in); 
	while(!fin.eof())
	{
		fin.read((char *)&ach, sizeof(ach));
		if((strcmp(ach.return_username(), temp_username)==0)&&(strcmp(ach.return_password(), temp_password)==0))
		{
			flag=1;
			break;
		}		
	}
	fin.seekg(0);
	fin.close();
	if (flag==1)
	{
		if (ach.return_status()=='Y')
			{
				chdir(ach.return_username());
				cout << "\nLogin Successfull.";
				char username[100];
				login_menu(temp_username);
				chdir("..\\");
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
	mkdir(obj1.return_username());
	chdir(obj1.return_username());
	fstream fout1("account_details.dat", ios::out|ios::app);
	fout1.write((char *)&obj, sizeof(obj));
	fout1.close();
	chdir("..\\");
}
class ADMINISTRATOR_MENU
{
	public:
		void admin_menu()
		{
			int choose;
			cout << "\nAdmin Menu: "
				 << "\n1. View all users."
				 << "\n2. Delete a user account."
				 << "\n3. Create a new user acoount."
				 << "\n4. Close a user's account."
				 << "\n5. Edit a user's account."
				 << "\n6. Create a bank branch."
				 << "\n7. Reset program."
				 << "\n8. Goto home."
				 << "\nEnter correct option: ";
			cin >> choose;
			switch(choose)
			{
				
			}
		}
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
			     << "\n3. Reopen your closed account."
			     << "\n4. Goto home."
			     << "\nEnter your choice: ";
			cin >> no;
			switch (no)
			{
				case 1: 
					login();
					goto lb;
				case 2: 
					account_write();
					goto lb;
					
				case 3:
					reopen_account();
					goto lb;	
				
				case 4: break;
					
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
	char about_str[500];
	cout << "\n\n==========================================================================================\n\n";
	while (!about_out.eof())
	{
		about_out.getline(about_str, 500);
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
    char program_password[100];
    strcpy(program_password, crypt_pass());
	if ((strcmp(program_password, "project")==0)||(strcmp(program_password, "admin")==0))
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
