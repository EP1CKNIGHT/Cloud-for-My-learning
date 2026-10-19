#include <bits/stdc++.h>
using namespace std;

void ReadNumbers(float &Num1, float &Num2)
{
    cout << "Please Enter First Number: \n";
    cin >> Num1;
    cout << "Please Enter Second Number: \n";
    cin >> Num2;
}

void Swap(float &Num1, float &Num2)
{
    float Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintNumbers(float Num1, float Num2) { cout << Num1 << " " << Num2 << endl; }

int main()
{
    float Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    cout << "The Numbers After Swaping is:" << endl;
    PrintNumbers(Num1, Num2);

    return 0;
}