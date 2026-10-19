#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string Name;
    cout << "Please Enter The Name:" << endl;
    getline(cin, Name);
    return Name;
}

void PrintName(string Name)
{
    cout << "\nThe Name is: " << Name << endl;
}

int main()
{

    PrintName(ReadName());
    return 0;
}