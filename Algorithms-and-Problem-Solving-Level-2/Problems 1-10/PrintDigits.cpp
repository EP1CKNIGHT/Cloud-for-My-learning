// Problem 5: Print the digits of a number.
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
void PrintLeastSignificantDigit(int Number)
{
    {
        int LSD = 0;

        // Continue looping while there are digits left in Number.
        while (Number > 0)
        {
            LSD = Number % 10;    // Extract the last digit of Number.
            Number = Number / 10; // Remove the last digit from Number.
            cout << LSD << endl;  // Print the extracted Least Signefecnt digit on a new line.
        }
    }
}

int main()
{
    PrintLeastSignificantDigit(ReadPostiveNumber("Enter Positive Number To print Digits From Least Significant To the Most Significant"));

    return 0;
}
