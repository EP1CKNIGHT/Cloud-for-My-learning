#include <bits/stdc++.h>
using namespace std;

int ReadNumberInRange(int From, int To)
{
    int Num;
    cout << "Range is From: \n";
    cin >> From;
    cout << "\nRange is To: \n";
    cin >> To;
    cout << "\nEnter a Postive vaild int Number Between The Range: " << endl<<endl;

    do
    {
        cin >> Num;
        if (Num < From || Num > To)
            cout << "\nInput should Be Between The Range From " << From << " To " << To << endl<<endl;

    } while (Num < From || Num > To);

    return Num;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A'; 
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}
int main()
{
    int From = 0, To = 0;

cout <<GetGradeLetter(ReadNumberInRange(From, To)) << endl;
    return 0;
}