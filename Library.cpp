//LIBRARY MANAGEMENT SOFTWARE

#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<time.h>

using namespace std;

class BookOperation
{
	public:
		void bookDetailsEntry()
		{
			int bk_id;
			char bk_name[50], bk_auth[50];
			fstream fobj("lib_book_details.dat", ios::out|ios::app);
			
			cout << "\nEnter book ID : ";
			cin.sync();
			cin >> bk_id;
			
			cout << "\nEnter book name : ";
			cin.sync();
			cin.getline(bk_name,50);
			
			cout << "\nEnter book author : ";
			cin.sync();	
			cin.getline(bk_auth,50);
			
			fobj << bk_id << "      " << bk_name << "      " << bk_auth << endl;
			fobj.close();	
				
			cout<<"\n--------Successfully Saved--------";
		}
		
		void searchBookDetails()
		{
			fstream fobj1("lib_book_details.dat", ios::in);
			label_search:
			cout << "\n\nSEARCH MENU ";
			cout << "\n1. Display all";
			cout << "\n2. Search by book ID";
			cout << "\n3. Search by book name";
			cout << "\n4. Search by book author";
			cout << "\n5. Exit";
			
			cout << "\nEnter your choice (1-3) : ";
			
			int choose;
			cin >> choose;
			switch (choose)
			{
				case 1 : 
					char str_line[500];
					cout << "\n\n================================================================================";
					while(fobj1.getline(str_line,500)!=NULL)
					{
						cout<<"\n\n"<<str_line;	
					}
					cout<<"\n\n================================================================================\n\n";
					break;
				
				case 2 :
					char str_line1[500];
					cout << "\nEnter bookID :";
					char bkID[10];
					cin.sync();
					cin >> bkID;
					cout << "\n\n================================================================================";
					while(fobj1.getline(str_line1,500)!=NULL)
					{
						if(strstr(str_line1, bkID)!=NULL)
						cout<<"\n\n"<<str_line1;	
					}
					cout<<"\n\n================================================================================\n\n";
					break;
					
				case 3 :
					char str_line2[500];
					cout << "\nEnter book name : ";
					char bkname[10];
					cin.sync();
					cin.getline(bkname, 50);
					cout<<"\n\n================================================================================";
					while(fobj1.getline(str_line2,500)!=NULL)
					{
						if(strstr(str_line2, bkname)!=NULL)
						cout<<"\n\n"<<str_line2;	
					}
					cout<<"\n\n================================================================================\n\n";
					break;
					
				case 4 :
					char str_line3[500];
					cout << "\nEnter book author : ";
					char bkauth[10];
					cin.sync();
					cin.getline(bkauth, 50);
					cout << "\n\n================================================================================";
					while(fobj1.getline(str_line3,500)!=NULL)
					{
						if(strstr(str_line3, bkauth)!=NULL)
						cout<<"\n\n"<<str_line3;	
					}
					cout << "\n\n================================================================================\n\n";
					break;
					
				case 5 :
					Sleep (500);
					cout << "\n\nExiting ";
					for (int i=0; i<=4; i++)
					{
						Sleep (500);
						cout << ".";
					}
					exit(0);
					break; 	
					
				default :
					cout << "\n....Invalid Choice....";
					goto label_search;
					break;			
			}
			fobj1.close();
		}
		
		void delete_book()
		{
			char temp_str[500];
			fstream fin("lib_book_details.dat",ios::in);
			cout << "\nEnter the full author name / book name / book ID to delete that book data : ";
			char temp_search[500];
			cin.sync();
			cin.getline(temp_search, 500);
			char q;
			cout << "\nAre you sure you want to delete the record (Y/N)? ";
			cin >> q;
			if (q=='Y'|q=='y')
			{
				fstream fout("temp_lib.dat",ios::out|ios::app);
				while(fin.getline(temp_str, 500)!=NULL)
				{
					if(strstr(temp_str,temp_search)==NULL)
					{
						fout << temp_str << endl;
					}	
				}
				fin.close();
				fout.close();
				remove("lib_book_details.dat");
				rename("temp_lib.dat", "lib_book_details.dat");
				cout << "\n....Successfully Deleted....";	
			}
		}
		
		void update_book()
		{
			char temp1_str[500];
			fstream fup("lib_book_details.dat", ios::in);
			fstream temp1("temp1_lib.dat", ios::in|ios::out|ios::app);
			char ID[10];
			cout << "\nEnter the ID of the book that you want to update : ";
			cin.sync();
			cin.getline(ID, 10);
			while(fup.getline(temp1_str, 500)!=NULL)
			{
				if(strstr(temp1_str, ID)!=NULL)
				{
					int bo_ID;
					char bo_Name[50], bo_Author[50];
					cout << "\nEnter new Book ID : ";
					cin >> bo_ID;
					cout << "\nEnter new Book Name : ";
					cin.sync();
					cin.getline(bo_Name, 50);
					cout << "\nEnter new Book Author : ";
					cin.sync();
					cin.getline(bo_Author, 50);
					temp1 << bo_ID << "      " << bo_Name << "      " << bo_Author << endl;
				}
				else
				{
					temp1 << temp1_str << endl;
				}
			}
			fup.close();
			temp1.close();
			remove("lib_book_details.dat");
			rename("temp1_lib.dat", "lib_book_details.dat");
			cout << "\n....Successfully Updated....";
		}
		
		void admin_menu()
		{
			label_admin:
			string admin_pass=" ";
			cout << "\nEnter Administrator Password : ";
			cin.sync();
			getline(cin, admin_pass);
			if (admin_pass=="admin")
			{
				cout << "\a";
				cout << "\n\nADMINISTRATOR MENU";
				cout << "\n1. Delete Book Data";
				cout << "\n2. Update Book Data";
				cout << "\n3. Exit";
				
				cout << "\nEnter choice (1-3) : ";
				
				int choose_admin;
				cin >> choose_admin;
				BookOperation bkop;
				switch (choose_admin)
				{
					case 1:
						bkop.delete_book();
						break;
					case 2:
						bkop.update_book();
						break;
					case 3:
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
						cout << "\n....Invalid Choice....";
						break;			
				}
			}
			else
			{
				cout <<"\n....Invalid Password....";
				goto label_admin;
			}
		}
};

void about()
{
	fstream about_out("lib_about.dat", ios::in);
	char about_str[500];
	cout << "\n\n==========================================================================================\n\n";
	while (about_out.getline(about_str, 500)!=NULL)
	{
		cout << about_str << endl;
	}
	cout << "\n==========================================================================================\n";
	about_out.close();
}

int main()
{
	system("COLOR 8F");
	char date[10];
	cout <<"\n                                   **** LIBRARY MANAGEMENT SOFTWARE ****                                   " << _strdate(date);
	BookOperation bo;
	string pass = " ";
	label_main:
	cout << "\nEnter Project Password : ";
	cin.sync();
	getline(cin, pass);
	if (pass=="project")
	{
		cout << "\a";
		int choice;
		while(1)
		{
			cout << "\n\nMAIN MENU";
			cout << "\n1. Book Details Entry";
			cout << "\n2. Search Book Details";
			cout << "\n3. Administrator Menu";
			cout << "\n4. About";
			cout << "\n5. Exit";
		
			cout << "\nEnter your choice (1-3) : ";
			cin >> choice;
		
			switch(choice)
			{
				case 1:
					bo.bookDetailsEntry();
					break;
				case 2:
					bo.searchBookDetails();
					break;
				case 3:
					bo.admin_menu();
					break;
				case 4:
					about();
					break;	
				case 5:
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
					cout << "\n....Invalid Choice....";				
			}
		}
	}
	else
	{
		cout <<"\n....Invalid Password....";
		goto label_main;
	}
}
