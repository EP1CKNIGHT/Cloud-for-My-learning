// Problem 6: Calculate the sum of a number's digits.
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
int SumDigits(int Number)
{

    int LSD = 0;
    int Sum = 0;
    // Continue looping while there are digits left in Number.
    while (Number > 0)
    {
        LSD = Number % 10;    // Extract the last digit of Number.
        Number = Number / 10; // Remove the last digit from Number.
        Sum += LSD;
    }

    return Sum;
}
void PrintSumOfDigits(int Number)
{
    int Sum = SumDigits(Number);
    cout << "The Sum of The Digits of the Entered Number : " << Sum << endl;
}
int main()
{
    PrintSumOfDigits(ReadPostiveNumber("Enter Positive Number To Get The Sum Of it's Digits : "));
    return 0;
}
