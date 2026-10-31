// Problem 11: Check whether a number is a palindrome.
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0; // Variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the number entered by the user.
    } while (Number <= 0); // Repeat if the number is not positive.

    return Number; // Return the valid positive number.
}

int ReverseNumber(int Number)
{
    int Remainder = 0; // Variable to store the last digit extracted from the number.
    int Number2 = 0;   // Variable to accumulate the reversed number.

    // Process each digit until the original number becomes 0.
    while (Number > 0)
    {
        Remainder = Number % 10;            // Extract the last digit from Number.
        Number = Number / 10;               // Remove the last digit from Number.
        Number2 = Number2 * 10 + Remainder; // Append the extracted digit to Number2.
    }

    return Number2; // Return the reversed number.
}

bool CheckPalindrome(int Number)
{
    return (Number == ReverseNumber(Number));
}

int main()
{
    int Number = ReadPositiveNumber("Enter A positive Number To check if Palindrome : ");
    bool Result = CheckPalindrome(Number);

    if (Result)

        cout << "The Number is palindrome\n";
    else
        cout << "The Number isn't palindrome\n";

    return 0;
}
