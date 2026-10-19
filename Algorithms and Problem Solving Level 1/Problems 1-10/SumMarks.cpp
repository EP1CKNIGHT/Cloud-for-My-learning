#include <iostream>
using namespace std;

void ReadMarks(int &First, int &Second, int &Third)
{
    cout << "Enter First Mark: \n";
    cin >> First;
    cout << "Enter Second Mark: \n";
    cin >> Second;
    cout << "Enter Third Mark: \n";
    cin >> Third;
}
int SumOfMarks(int First, int Second, int Third)
{
    return First + Second + Third;
}

float CalculateAverage(int First, int Second, int Third) { return (SumOfMarks(First, Second, Third) / 3); }

void PrintAvergae(float Avarage)
{

    cout << "The Average of Marks is: " << Avarage << endl;
}

int main()
{

    int First, Second, Third;
    ReadMarks(First, Second, Third);

    PrintAvergae(CalculateAverage(First, Second, Third));
    return 0;
}