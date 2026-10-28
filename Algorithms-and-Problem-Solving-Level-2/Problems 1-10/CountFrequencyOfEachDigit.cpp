// Problem 9: Count the frequency of every digit in a number.
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

int main()
{
    int Number = ReadPostiveNumber("Enter Positive Number : ");
    short DigitToCheck = ReadPostiveNumber("Enter A Digit To count The Freqency of it : ");

    cout << "\nDigit " << DigitToCheck << " Freqency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

    return 0;
}
