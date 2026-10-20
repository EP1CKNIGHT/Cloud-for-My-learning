// Problem 2: Print all prime numbers from 1 up to the entered number.
#include <iostream>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPostiveNumber(string Massage)
{

    float Num = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Num;

    } while (Num < 0);

    return Num;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int HalfNumber = round(Number / 2);
    if (Number < 2)
        return enPrimeNotPrime::NotPrime;

    else
    {
        for (int counter = 2; counter <= HalfNumber; counter++)
        {
            if (Number % counter == 0)
                return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n"; // Print a newline for better formatting.
    // Display a header indicating the range being considered.
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;

    // Loop through all numbers from 1 to Number.
    for (int i = 1; i <= Number; i++)
    {
        // Use the CheckPrime function to determine if the current number i is prime.
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            // If i is prime, print it on a new line.
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPostiveNumber("Input A Positive Number"));
    return 0;
}
