// Problem 9: Count how many times a chosen digit appears in a number.
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

void PrintAllDigitsFrequency(int Number)
{
    for (int i = 0; i <= 9; i++)
    {
        short DigitFrequency = 0;

        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
            cout << "\nDigit " << i << " Freqency is " << CountDigitFrequency(i, Number) << " Time(s).\n";
    }
}

int main()
{
    int Number = ReadPostiveNumber("Enter Positive Number : ");
    PrintAllDigitsFrequency(Number);
    return 0;
}
