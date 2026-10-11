#include <bits/stdc++.h>
using namespace std;
double ReadPostiveNumber(string Massage)
{

    float Num = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}

double TotalMonthsToPayTheLoan(double LoanAmount, double MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}

int main()
{
    int LoanAmount = ReadPostiveNumber("Enter The Loan Amount : ");

    int MonthlyInstallment = ReadPostiveNumber("Enter Much Can you pay Per Month  : ");

    double MonthsToPayTheLoan=TotalMonthsToPayTheLoan(LoanAmount, MonthlyInstallment);

    cout<<"Total Months Requaired To Pay The Loan is : "<<MonthsToPayTheLoan<<endl;
    return 0;
}