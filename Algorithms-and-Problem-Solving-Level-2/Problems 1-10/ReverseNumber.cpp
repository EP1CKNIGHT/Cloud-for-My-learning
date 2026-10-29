// Problem 7: Reverse the digits of a number.
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
/* void PrintReversedDigits(int Number) // This soultion is just a visual one not a practical one
{
    int LSD = 0;
    // Continue looping while there are digits left in Number.
    while (Number > 0)
    {
        LSD = Number % 10;    // Extract the last digit of Number.
        Number = Number / 10; // Remove the last digit from Number.
        cout << LSD;
    }
    cout << endl;
}
*/
int PrintReversedDigits(int Number)
{
    int LSD = 0;
    int ReversedNumber = 0;
    // Continue looping while there are digits left in Number.
    while (Number > 0)
    {
        LSD = Number % 10;    // Extract the last digit of Number.
        Number = Number / 10; // Remove the last digit from Number.
        ReversedNumber = ReversedNumber * 10 + LSD;
        cout << LSD;
    }
    cout << endl;
    return ReversedNumber;
}

int main()
{
    PrintReversedDigits(ReadPostiveNumber("Enter Positive Number to Get it in reversed Order"));
    return 0;
}