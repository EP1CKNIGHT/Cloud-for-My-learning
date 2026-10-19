#include <bits/stdc++.h>

using namespace std;

enum enMonthOfYear
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};
int ReadNumberInRange(string Massage, int From, int To)

{

    float Day = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Day;
        if (Day < From || Day > To)
            cout << "Invalid Input Input should be Betweeen [ 1 - 12 ]";

        cout << endl;

    } while (Day < From || Day > To);

    return Day;
}

enMonthOfYear ReadMonthOfYear()
{
    int From = 1, To = 12;

    return (enMonthOfYear)ReadNumberInRange("\nEnter A Month of The Year [1 to 12] : ", From, To);
}

string GetMonthOfYear(enMonthOfYear Month)
{
    // Use a switch statement to return the correct month name.
    switch (Month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June"; // Fixed typo: Changed "Jun" to "June"
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "September";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "Not a valid Month"; // Default case (should never be reached).
    }
}

int main()
{

    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
}