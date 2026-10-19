#include <bits/stdc++.h>
using namespace std;

float ReadNumber(string Massage)
{
    float Num = 0;
    cout << Massage << endl;
    cin >> Num;
    return Num;
}

int SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;
    do
    {
        Number = ReadNumber("Please Enter Number " + to_string(Counter++) + ": ");
        if (Number == -99)
        {
            break;
        }

        Sum += Number;

    } while (Number != -99);

    return Sum;
}

int main()
{
    cout << SumNumbers() << endl;
    return 0;
}