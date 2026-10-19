#include <bits/stdc++.h>
using namespace std;

void ReadLenghts(float &Base, float &Hight)
{
    cout << "Please Enter Triangle Base(m): \n";
    cin >> Base;
    cout << "Please Enter Triangle Hight(m): \n";
    cin >> Hight;
}

double TriangleArea(float Base, float Hight)
{
    
    return 0.5*(Base * Hight);
}

void PrintArea(double Area) { cout << "The Area of Triangle: " << Area<<"m^2\n"; }

int main()
{   
    float Base, Hight;
    ReadLenghts(Base, Hight);
    PrintArea(TriangleArea(Base,Hight));
    return 0;
}