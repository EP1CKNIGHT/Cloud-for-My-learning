#include <bits/stdc++.h>
using namespace std;

float ReadSqaureSide()
{
    float Side;
    cout << "Enter The Lenght of The Side: ";
    cin >> Side;
    return Side;
}
float CircleArea_Inscribed_In_Sqaure(float Side)
{
    const float PI = 3.14;
    float Area = (PI * pow(Side, 2)) / 4;
    return Area;
}

void PrintResult(float Area) { cout << "The Area of Circle: " << Area << "m^2\n"; }

int main()
{   
    PrintResult(CircleArea_Inscribed_In_Sqaure(ReadSqaureSide()));
    return 0;
}