#include <iostream>
#include <math.h>
using namespace std;

/*
float ReadTotalBill()
{
   float TotalBill = 0;
   do
   {
       if (true)
           cout << "Enter The Total Bill (Should Be Positve) : " << endl;
       cin >> TotalBill;

   } while (TotalBill < 0);

   return TotalBill;
}

float ReadPaidCash()
{

   float Cash = 0;
   do
   {
       if (true)
           cout << "Enter The Paid cash(Paid Cash Should Be Greater/Equals To Total Bill) : " << endl;
       cin >> Cash;

   } while (Cash <= 0);

   return Cash;
}

float CalculateRemainder()
{

   float Remainder = abs(ReadTotalBill() - ReadPaidCash());

   cout << "The Total Remainder is : " << endl;
   cout << Remainder << endl;
   return Remainder;
}

int main()
{

   CalculateRemainder();
}
*********************************************************
*/

float ReadTotalBill()
{
    float TotalBill = 0;
    do
    {
        if (true)
            cout << "Enter The Total Bill (Should Be Positve) : " << endl;
        cin >> TotalBill;

    } while (TotalBill < 0);

    return TotalBill;
}

float ReadPaidCash(float TotalBill)
{
    float Cash = 0;
    do
    {
        cout << "Enter Paid Cash (must be >= " << TotalBill << "): ";
        cin >> Cash;

    } while (Cash < TotalBill);

    return Cash;
}

float CalculateRemainder(float TotalBill, float PaidCash)
{

    return (PaidCash - TotalBill);
}

int main()
{
    float TotalBill = ReadTotalBill();
    float TotalCash = ReadPaidCash(TotalBill);
    float Remainder = CalculateRemainder(TotalBill,TotalCash);
    cout << "\n****************************\n";
    cout << "The Remainder: " << Remainder << endl;
    cout << "****************************\n";
}