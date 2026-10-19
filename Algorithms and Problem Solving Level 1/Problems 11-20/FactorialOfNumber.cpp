#include <bits/stdc++.h>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Enter a Postive vaild int Number" << endl;

    do
    {
        cin >> Num;
        if (Num < 0)
            cout << "Input should Be Positve \n";

    } while (Num < 0);

    return Num;
}

unsigned long long Factorial_Of_Number(int Num)
{
    unsigned long long Fac = 1;
    if (Num < 0)
        return -1;

    if (Num == 0 || Num == 1)
        return Fac;
    while (Num > 1)
    {
        Fac = Fac * Num;
        Num--;
    }
    return Fac;
}

void PrintResults(unsigned long long Result)
{
    cout << "The factorial of Number is: " << Result << endl;
}
int main()
{
    PrintResults(Factorial_Of_Number(ReadNumber()));
    return 0;
}