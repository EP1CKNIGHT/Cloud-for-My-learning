#include <iostream>
#include <math.h>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

float ReadPostiveNumber(string Massage)
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

void PrintType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::Prime:
        cout << "The Number is Prime" <<endl;
        break;
        case enPrimeNotPrime::NotPrime:
        cout << "The Number isn't Prime" <<endl;
        break;
    }
}
int main()
{
    PrintType(ReadPostiveNumber("Please Enter A Postive Number: "));
}