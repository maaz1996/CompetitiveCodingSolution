#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (k > 0)
                {
                    if (i == 0 and j == 0)
                        a[i][j] = 'O';
                    else
                        a[i][j] = '.';
                    k--;
                }
                else
                {
                    a[i][j] = 'X';
                }
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
//url: https://www.codechef.com/JULY20B/problems/ADAKING