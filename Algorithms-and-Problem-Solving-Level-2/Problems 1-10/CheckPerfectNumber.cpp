// Problem 3: Check whether a number is perfect.
#include <iostream>
using namespace std;

int ReadPostiveNumber(string Massage)
{

    int Num = 0;
    do
    {

        cout << Massage << endl;
        cin >> Num;

    } while (Num < 0);

    return Num;
}
bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i <= Number / 2; i++) // I have Used Number/2 rather Than Number-1 because No proper divisor Will be found after The Half of The Number
    {
        if (Number % i == 0)
            Sum += i;
    }
    return Sum == Number;
}
void PrintResults(int Number)
{
    if (IsPerfectNumber(Number))
        cout << " Number " << Number << " Is Perfect" << endl;
    else
        cout << " Number " << Number << " Isn't Perfect" << endl;
}
int main()
{
    PrintResults(ReadPostiveNumber("Enter Positve Number To Check If The Number Is Perfect or Not"));
    return 0;
}
