#include<iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
/*std::vector<std::string> split(const std::string &s, char delim) {
  std::stringstream ss(s);
  std::string item;
  std::vector<std::string> elems;
  while (std::getline(ss, item, delim)) {
    elems.push_back(item);
    // elems.push_back(std::move(item)); // if C++11 (based on comment from @mchiasson)
  }
  return elems;
}*/

int main()
{
	string s1="";
	cout << "\nEnter any string : ";
	getline(cin, s1);
	stringstream string_to_be_split(s1);
	vector<string> split_values;
	string temp_string="";
	char delim = ' ';
	for(;getline(string_to_be_split, temp_string, delim);)
	{
		split_values.push_back(temp_string);
	}
	
	for(int i=0; i<split_values.size(); i++)
	{
		cout << "\nValues = " << split_values.at(i);
	}
}
