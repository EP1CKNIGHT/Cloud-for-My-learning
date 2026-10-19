#include <iostream>
#include <string>
using namespace std;

enum enNumberType
{
    Odd = 1,
    Even = 2
};

int ReadNumber()
{
    int Num;
    cout << "\nPlease Enter a vaild int Number" << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num)
{
    if (Num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "Number is Even.\n";
    else
        cout << "Number is Odd.\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
}
