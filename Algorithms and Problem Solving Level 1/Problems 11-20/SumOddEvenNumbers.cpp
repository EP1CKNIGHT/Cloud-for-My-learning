#include <iostream>
#include <string>
using namespace std;

enum enNumberType
{
    Odd = 1,
    Even = 2,
    All = 3
};
int ReadNumber()
{
    int Num;
    cout << "Please Enter a vaild int Number" << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num)
{
    if (Num % 2 != 0)
        return enNumberType::Odd;
    else    
        return enNumberType::Even;
}

int SumOddNumbers(int Num)
{
    int sum = 0;
    for (int Counter = 1; Counter <= Num; Counter++)
        if (CheckNumberType(Counter) == enNumberType::Odd)
        {
            sum += Counter;
        }
     
    return sum;
}
int EvenNumbers(int Num)
{
    int sum = 0;
    for (int Counter = 1; Counter <= Num; Counter++)
        if (CheckNumberType(Counter) == enNumberType::Even )
        {
            sum += Counter;
        }
     
    return sum;
}

void PrintSumOfOddNumber(int Sum)
{   
    cout << "The Sum of Odd Numbers is: " << Sum << endl;
}

int main()
{
    PrintSumOfOddNumber(SumOddNumbers(ReadNumber()));

    return 0;
}