#include <bits/stdc++.h>
using namespace std;

struct strDuration
{
    float Seconds, Minutes, Hours, Days;
};

float ReadPostiveNumber(string Massage)
{

    float Num = 0;
    do
    {
        if (true)
            cout << Massage << endl;
        cin >> Num;

        cout << endl;

    } while (Num < 0);

    return Num;
}

strDuration SecondsToDurations(int TotalSeconds)
{
    int Remainder = 0;
    strDuration Duration;

    const int SecondsPerDay = (60 * 60 * 24);
    const int SecondsPerHours = (60 * 60);
    const int SecondsPerMinutes = 60;

    Duration.Days = TotalSeconds / SecondsPerDay;

    Remainder = TotalSeconds % (60 * 60 * 24);

    Duration.Hours = Remainder / SecondsPerHours;

    Remainder = TotalSeconds % SecondsPerHours;

    Duration.Minutes = Remainder / SecondsPerMinutes;

    Duration.Seconds = Remainder = TotalSeconds % SecondsPerMinutes;

    /* Duration.Days = TotalSeconds / (60 * 60 * 24);
    Remainder = TotalSeconds % (60 * 60 * 24);
    Duration.Hours = Remainder / (60 * 60);
    Remainder = TotalSeconds % (60 * 60);
    Duration.Minutes = Remainder / 60;
    Duration.Seconds = Remainder = TotalSeconds % 60;
*/
    return Duration;
}

void PrintTaskDuration(strDuration TaskDuration)
{
    cout << "The Task Duration is : ";
    cout << TaskDuration.Days << " : " << TaskDuration.Hours << " : " << TaskDuration.Minutes << " : " << TaskDuration.Seconds << endl;
}

int main()
{
    int TotalSeconds = ReadPostiveNumber("Enter Total Seconds : ");

    PrintTaskDuration(SecondsToDurations(TotalSeconds));
}