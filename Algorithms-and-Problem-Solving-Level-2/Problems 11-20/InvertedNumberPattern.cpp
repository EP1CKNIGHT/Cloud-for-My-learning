// Problem 12: Print an inverted number pattern.
#include <iostream>
using namespace std;
short ReadPositiveDigit(string Message)
{
    short Digit = 0; // Variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Digit;            // Read the number entered by the user.
    } while (Digit <= 0); // Repeat if the number is not positive.

    return Digit; // Return the valid positive number.
}

void PrintNumberInInvertedPattaren(short Digit)
{
    while (Digit > 0)
    {
        for (int Times = Digit; Times > 0; Times--)
        {
            cout << Digit;
        }
        cout << endl;

        Digit--;
    }
    cout << endl;
}
int main()
{
    PrintNumberInInvertedPattaren(ReadPositiveDigit("Enter a Positve Digit of a Number"));
    return 0;
}
