// Problem 10: Print the digits of a number from left to right.
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
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int DigitFrequency = 0;
    short EnterdDigit = 0; // Same as Least Significant Digit
    while (Number > 0)
    {
        EnterdDigit = Number % 10;
        Number /= 10;

        if (DigitToCheck == EnterdDigit)
            ++DigitFrequency;
    }
    return DigitFrequency;
}

int CountAllDigitsOfNumber(int TotalDigits)
{
    TotalDigits = 0;
    int Number = ReadPostiveNumber("Enter Positive Number To print Digits From Least Significant To the Most Significant");

    for (int i = 0; i <= 9; i++)
    {
        short DigitFrequency = 0;

        if (DigitFrequency > 0)
        {
            CountDigitFrequency(i, Number);
        }
        TotalDigits += CountDigitFrequency(i, Number);
    }
    return TotalDigits;
}

void PrintMostSignificantDigit(int Number)
{
    {
        short MSD = 0;
        int TotalDigits = CountAllDigitsOfNumber(Number);
        // Continue looping while there are digits Right in Number.
        while (Number > 0)
        {
            for (int i = 1; i < TotalDigits; i++)
                MSD = Number % (10 * TotalDigits - i); // Extract the first digit of Number.
            Number = Number / 10;                      // Remove the first digit from Number.
            cout << MSD << endl;                       // Print the extracted Most Signefecnt digit on a new line.
        }
        cout << endl;
    }
}

int main()
{
    int Number = 0;
    PrintMostSignificantDigit(Number);
    return 0;
}
