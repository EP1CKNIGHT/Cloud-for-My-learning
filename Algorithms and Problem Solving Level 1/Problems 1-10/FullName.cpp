#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    string FirstName, LastName;
    bool Reversed;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter First Name: " << endl;
    cin >> Info.FirstName;
    cout << "Please Enter Last Name:" << endl;
    cin >> Info.LastName;
    cout << "Is The Name Reversed? (1 for Yes / 0 for No)" << endl;
    cin >> Info.Reversed;
    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName;
    FullName = "";
    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}

void PrintFullName(string FullName)
{

    cout << "\nThe Full Name is: " << FullName << endl;
}
int main()
{
    stInfo Info;

    PrintFullName(GetFullName(ReadInfo(), Info.Reversed));
    return 0;
}