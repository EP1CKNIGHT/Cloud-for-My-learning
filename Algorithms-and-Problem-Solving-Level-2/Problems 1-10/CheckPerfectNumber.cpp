// Problem 3: Check whether a number is perfect.
#include <iostream>
using namespace std;

int ReadPostiveNumber(string Massage)
{

    float Num = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Num;

    } while (Num < 0);

    return Num;
}
bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i <= Number - 1; i++)
    {
        if (Number % i == 0)
            Sum += Number;
        else
            Sum = Sum;
    }
    return Number == Sum;
}
void PrintResults(int Number)
{
    if (IsPerfectNumber(Number) == true)
        cout << " Number " << Number << " Is Perfect" << endl;
    else
        cout << " Number " << Number << " Isn't Perfect" << endl;
}
int main()
{
    int Number;
    PrintResults(ReadPostiveNumber("Enter Positve Number To Check If The Number Is Perfect or Not"));
    return 0;
}
