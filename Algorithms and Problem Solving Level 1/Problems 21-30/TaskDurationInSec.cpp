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

        cout << endl;

    } while (Num < 0);

    return Num;
}
struct stDuration
{
    float Seconds, Minutes, Hours, Days;
};

stDuration ReadTaskDuration()
{
    stDuration Duration;

    Duration.Days = ReadPostiveNumber("Enter Days : ");

    Duration.Hours = ReadPostiveNumber("Enter Hours : ");

    Duration.Minutes = ReadPostiveNumber("Enter Minutes : ");

    Duration.Seconds = ReadPostiveNumber("Enter Seconds : ");

    return Duration;
}

int TaskDurationInSeconds(stDuration Duration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = Duration.Seconds * 1 + Duration.Minutes * 60 + Duration.Hours * 3600 + Duration.Days * 3600 * 24;

    return DurationInSeconds;
}

int main()
{

    int DurationInSeconds = TaskDurationInSeconds(ReadTaskDuration());
    cout << "Task Duration In Seconds : " << DurationInSeconds << endl;

    return 0;
}