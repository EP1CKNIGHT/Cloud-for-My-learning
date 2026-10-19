#include <bits/stdc++.h>
using namespace std;
enum enDaysOfWeek
{
    Sun = 1,
    Mon,
    Tus,
    Wen,
    Thr,
    Fri,
    Sat
};
int ReadNumberInRange(string Massage, int From, int To)

{

    float Day = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Day;

        cout << endl;

    } while (Day < From || Day > To);

    return Day;
}
enDaysOfWeek ReadDayOfWeek()
{
    int From = 1, To = 7;

    return (enDaysOfWeek)ReadNumberInRange("\nEnter The Day of Week ( 1 - 7 ) ", From, To);
}
string GetDayOfWeek(enDaysOfWeek Day)
{

    switch (Day)
    {
    case (enDaysOfWeek::Sun):
        return "Sunday";

    case (enDaysOfWeek::Mon):
        return ("Monday");

    case (enDaysOfWeek::Tus):
        return "Tuesday";

    case (enDaysOfWeek::Wen):
        return "Wensday";

    case (enDaysOfWeek::Thr):
        return "Thursady";

    case (enDaysOfWeek::Fri):
        return "Friday";

    case (enDaysOfWeek::Sat):
        return "Satrday";

    default:
        return "Not a valid Day";
    }
}

int main()
{
    enDaysOfWeek Day = ReadDayOfWeek();
    cout << GetDayOfWeek(Day) << endl;
    return 0;
}
