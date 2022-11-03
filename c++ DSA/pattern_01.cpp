#include <bits/stdc++.h>
using namespace std;

int main()
{

    // print rectangle box
    // ****
    // ****
    // ****
    // ****
    // ****

    int row, col;

    cout << "Enter row and col" << endl;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}