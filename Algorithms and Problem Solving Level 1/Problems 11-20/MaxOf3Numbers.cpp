#include <bits/stdc++.h>
using namespace std;

void ReadNumbers(float &Num1, float &Num2, float &Num3)
{
    cout << "Please Enter The First Number: \n";
    cin >> Num1;
    cout << "Please Enter The Second Number: \n";
    cin >> Num2;
    cout << "Please Enter The Third Number: \n";
    cin >> Num3;
}

float MaxOf3Numbers(float Num1, float Num2, float Num3) // I Can do it directly with max(Num1,max(Num2,Num3)) But that doesn't Tests my logic 
{
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
            return   Num1;
        else
            return   Num3;
    }
    else 
     {
        if (Num2 > Num3)
            return   Num2;
        else
            return   Num3;
    }
}   
void PrintNumbers(float Max) { cout << "The Maximum of The 3 Numbers is: " << Max << endl; }

int main()
{
    float Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintNumbers(MaxOf3Numbers(Num1, Num2, Num3));
    return 0;
}