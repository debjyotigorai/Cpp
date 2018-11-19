#include <ctime>
#include <iostream>
using namespace std;
int main() 
{
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    cout << now->tm_mday << '-' 
    << (now->tm_mon + 1) << '-'
    << (now->tm_year + 1900)
    << "\n";
}
