// Problem 4: Print all perfect numbers from 1 up to the entered number.
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
void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        // Use the IsPerfectNumber function to determine if the number in that iteration is Perfect.
        if (IsPerfectNumber(i))
        {
            // If i is Perfect Number, print it on a new line.
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPostiveNumber("Enter Positve Number To Check If The Number Is Perfect or Not"));
    return 0;
}
