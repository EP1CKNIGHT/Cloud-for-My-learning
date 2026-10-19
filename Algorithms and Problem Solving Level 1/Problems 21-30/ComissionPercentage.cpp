#include <bits/stdc++.h>
using namespace std;

int ReadTotalSales()
{
    int TotalSalses = 0;
    cout << "Please Enter The Total Sales" << endl;
    cin >> TotalSalses;
    return TotalSalses;
}

float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0;
}

float CalculateTotalComission(float TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();

    cout << "\nComission Percentage = " << GetComissionPercentage(TotalSales) << "%" << endl;
    cout << "\nTotal Comission = " << CalculateTotalComission(TotalSales) << "$" << endl;
    return 0;
}
