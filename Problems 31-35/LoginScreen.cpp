#include <iostream>
using namespace std;
string ReadPinCode()
{
    string PinCode;
    cout << "Enter The Pin Code : " << endl;
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    int Attepmts = 3;
    string PinCode;
    do
    {   PinCode = ReadPinCode();
        --Attepmts;
        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong Pin,You Have " << Attepmts <<" more tries\n\n";
        }
    } while (PinCode != "1234" && Attepmts >= 1);

    return false;
}
int main()
{
    if (Login())
    {
        cout << "\nYour account balance is " << 1222 << " JD.\n";
        system("color 2F"); // turn The screen to Green
    }
    else
    {
        cout << "\nYour Card is Temporally Disabled Call The Bank on:+962798467708 For help \n";
        system("color 4F"); // turn The screen to Red
    }
    return 0;
}