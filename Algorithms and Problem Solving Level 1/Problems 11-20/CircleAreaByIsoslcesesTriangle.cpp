#include <bits/stdc++.h>
using namespace std;

void ReadLenghts(float &Base, float &Side)
{
    cout << "Please Enter Length of Triangle Base(m): \n";
    cin >> Base;
    cout << "Please Enter Length of one Triangle Sides(m): \n";
    cin >> Side;
}

double TriangleAreaByITrinagle(float Base, float S)
{

    const float PI = 3.14;
    float Area = (PI * (pow(Base, 2) / 4)) * ((2 * S - Base) / (2 * S + Base));
    return Area;
}

void PrintArea(double Area) { cout << "The Area of Triangle: " << Area << "m^2\n\n"; }

int main()
{
    float Base, Hight;
    ReadLenghts(Base, Hight);
    PrintArea(TriangleAreaByITrinagle(Base, Hight));

    int Counter = 10;
    cout << "Range printed using Do .. While Statement:\n";
    do
    {
        cout << Counter << endl;
        Counter--;
    }while (Counter >=1) ;

return 0;
}
