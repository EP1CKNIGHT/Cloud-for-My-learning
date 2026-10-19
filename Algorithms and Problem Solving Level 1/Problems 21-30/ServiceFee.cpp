#include <bits/stdc++.h>
using namespace std;
float ReadPostiveNumber(string Massage)
{

    float Num = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Num;

    } while (Num < 0);

    return Num;
}

float TotalBillAfterServiceFeeAndTax(float TotalBill)
{
//Total Bill after Service Fee 1.10%
TotalBill=TotalBill * 1.1; 
//Total Bill After Tax: 16%
TotalBill= TotalBill * 1.16;

return TotalBill;
}



int main()
{
    float TotalBill= ReadPostiveNumber("Enter Total Bill");

    cout<<endl;

    cout<<"Total Bill After Service Fee & Tax"<<endl;

    cout<<TotalBillAfterServiceFeeAndTax(TotalBill);

return 0;
}