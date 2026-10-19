#include <bits/stdc++.h>
using namespace std;

enum enOperationType
{
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};

float ReadNumber(string Massage)
{
    float Num = 0;
    cout << Massage << endl;
    cin >> Num;
    return Num;
}

enOperationType ReadOperationType()
{
    char OT = '+';
    cout << "Enter Operation Type( +, - , * , / ) : \n";
    cin >> OT;
    return (enOperationType) OT;
}

float Calculate(float Num1, float Num2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Num1 + Num2;

    case enOperationType::Subtract:
        return Num1 - Num2;

    case enOperationType::Multiply:
        return Num1 * Num2;

    case enOperationType::Divide:
        return Num1 / Num2;

    default:
        return Num1 + Num2;
    }
}

int main()
{
    float Number1 = ReadNumber("Enter the First number?");

    float Number2 = ReadNumber("\nEnter the Second number?");

    cout<<"\n"<<Calculate(Number1, Number2, ReadOperationType())<<endl;

    return 0;
}