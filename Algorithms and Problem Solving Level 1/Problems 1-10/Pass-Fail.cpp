#include <iostream>
#include <string>
using namespace std;

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

int ReadMark()
{
    int Mark = 0;
    do
    {
        cout << "\nWhat is Your Mark?\n";
        cin >> Mark;
        if (Mark < 0 || Mark > 100)
            cout << "\nMark should be between 0-100\n";

    } while (Mark < 0 || Mark > 100);

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(int Mark)
{
    enPassFail Result = CheckMark(Mark);
    if (Result == enPassFail::Pass)
        cout << "\nYou Passed"<<endl ;
    else
        cout << "You Failed" << endl;
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}
