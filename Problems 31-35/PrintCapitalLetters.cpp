#include <bits/stdc++.h>
using namespace std;

char ReadCapitalLetter()
{
    char Letter = char(65);
    do
    {
        cout << "Enter The Desired Capital Letter: \n";
        cin >> Letter;
        cin.ignore(100, '\n');
    } while (Letter < char(65) || Letter > char(90));
    return Letter;
}

void PrintCapitalLetter()
{
    cout << ReadCapitalLetter()
         << "." << endl;
}

int main()
{

    PrintCapitalLetter();

    return 0;
}