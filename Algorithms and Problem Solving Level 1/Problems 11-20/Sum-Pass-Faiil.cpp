#include <bits/stdc++.h>
using namespace std;

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

void ReadMarks(int &First, int &Second, int &Third)
{
    cout << "Enter First Mark: \n";
    cin >> First;
    cout << "Enter Second Mark: \n";
    cin >> Second;
    cout << "Enter Third Mark: \n";
    cin >> Third;
}
int SumOf3Marks(int First, int Second, int Third)
{
    return First + Second + Third;
}

float CalculateAverage(int First, int Second, int Third) { return (SumOf3Marks(First, Second, Third) / 3); }

enPassFail CheckAvarage(float Avarage)
{
    if (Avarage >= 50.0)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float Avarage)
{
    cout << "The Avarage is: " << Avarage << endl;

    if (CheckAvarage(Avarage)==enPassFail(Pass))
        cout << "\nPassed";
    else
        cout << "\nFailed";
}

int main()
{

    int First, Second, Third;
    ReadMarks(First, Second, Third);

    PrintResults(CalculateAverage(First, Second, Third));

    return 0;
}