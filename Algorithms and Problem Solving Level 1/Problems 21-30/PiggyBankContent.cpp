#include <bits/stdc++.h>

using namespace std;

// Struct: stPiggyBankContent
// Purpose: Represents the different types of coins and dollar bills in the piggy bank.
struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent BankContent;
    cout << "Enter Pennies " << endl;
    cin >> BankContent.Pennies;
    cout << "\nEnter Nickels " << endl;
    cin >> BankContent.Nickels;
    cout << "\nEnter Dimes " << endl;
    cin >> BankContent.Dimes;
    cout << "\nEnter Quarters " << endl;
    cin >> BankContent.Quarters;
    cout << "\nEnter Dollars " << endl;
    cin >> BankContent.Dollars;

    return BankContent;
}

int CalculateTotalPennies(stPiggyBankContent BankContent)
{
    int TotalPennies = 0;

    TotalPennies = BankContent.Pennies * 1 + BankContent.Nickels * 5 +
                   BankContent.Dimes * 10 + BankContent.Quarters * 25 + BankContent.Dollars * 100;
    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "\nThe Total Pennies Of PiggyBank: " << TotalPennies << endl;

    cout << "\nThe Total Dollars Of PiggyBank: " << (double)TotalPennies / 100 << " $" << endl;

    return 0;
}