// Problem 1: Print a multiplication table from 1 to 10.
#include <iostream>
using namespace std;

void PrintTableHeader()
{

    cout << "\n\n                 Multiplication Table From 1 to 10\n\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "       " << i;
    }

    cout << endl
         << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}
string ColumSperator(int i)
{
    if (i < 10)
        return "   |";
    else
        // For numbers 10 or greater, return a separator with two spaces before the pipe symbol
        return "  |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ColumSperator(i) << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();

    return 0;
}