#include <iostream>
#include <string>
using namespace std;

struct stPersonInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasPermit;
};

stPersonInfo ReadPersonInfo()
{
    stPersonInfo PersonInfo;

    cout << "Please Enter The Age:\n";
    cin >> PersonInfo.Age;

    cout << "Do The Person Has Driver License? (0 for No/ 1 for Yes)\n";
    cin >> PersonInfo.HasDrivingLicense;

    cout << "Do The Person Has Permit? (0 for No/ 1 for Yes)\n";
    cin >> PersonInfo.HasPermit;
    return PersonInfo;
}

bool IsAccepted(stPersonInfo Info)
{
    return (Info.Age > 21 && (Info.HasDrivingLicense || Info.HasPermit));
    
}
void PrintResult(stPersonInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hired" << endl;

    else
        cout << "Rejected" << endl;
}

int main()
{

    PrintResult(ReadPersonInfo());
    return 0;
}