int len=0, len2=0, i, j, sl;
						char book_name_copy[50];
						fstream br_out("lib_issue_return.dat", ios::in);
						char br_out1[500];
						fstream temp_return("temp_return.dat", ios::out|ios::app);
						fstream ir("issue_return.dat", ios::in);
						char ir1[500];
						int flag=0, flag1=0;
						char serial[10];
						cout << "\nEnter the serial no. : ";
						cin >> sl;
						fstream temp("temp.dat", ios::out|ios::app);
						cin.sync();
						temp << " " << sl << "  " << endl;
						cin.sync();
						temp.getline(serial, 10);
						remove("temp.dat");
						fstream br_out2("lib_issue_return.dat", ios::in);
						len=strlen(serial);
						while(br_out.getline(br_out1, 500)!=NULL)
						{
							if (strstr(br_out1, serial)!=NULL)
							int len2=0;
							for (i=len+2; br_out1[i]!='\0'; i++)
							len2++;
							for (i=len, j=0; br_out1[i]!='\0', j<len2; i++, j++)
							book_name_copy[j]=br_out1[i];
						}
						while(ir.getline(ir1, 500)!=NULL)
						{
							if (strstr(ir1, book_name_copy)==NULL)
								continue;
							else
							{
								flag1=1;
								break;
							}
						}
						if (flag1==1)
						{
							fstream ir_1("issue_return.dat", ios::in);
							fstream ir2("temp_issue_return.dat", ios::out|ios::app);
							char ir_2[500];
							while (ir_1.getline(ir_2, 500)!=NULL)
							{
								if (strstr(ir_2, book_name_copy)==NULL)
								ir2 << book_name_copy << endl;
							}
							
							ir_1.close();
							ir2.close();
							remove("issue_return.dat");
							rename("temp_issue_return.dat", "issue_return.dat");
							while(br_out.getline(temp_str, 500)!=NULL)
							{
								if (strstr(temp_str, serial)==NULL)
									continue;
								else
								{
									flag=1;
									break;
								}	
							}
							char temp_str2[500];
							if (flag==1)
							{
								while(br_out2.getline(temp_str2, 500)!=NULL)
								{
									if (strstr(temp_str2, serial)!=NULL)
									{
										cin.sync();
										temp_return << temp_str << "    " << _strdate(date2) << endl;
									}
									else
									{
										cin.sync();
										temp_return << temp_str << endl;
									}
								}
								temp.close();
								br_out.close();
								br_out2.close();
								remove("lib_issue_return.dat");
								temp_return.close();
								rename("temp_return.dat", "lib_issue_return.dat");
								cout << "\n....Book Returned....";
							}
							else
							{
								cout << "\nNo such books have been issued.";
								remove("temp_return.dat");
							}
						}
						else
						{
							cout << "\nNo such books are issued.";	
						}
						break;
