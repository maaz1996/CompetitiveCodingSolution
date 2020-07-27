#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x;
        cin >> x;
        int count = 0;
        int xin = 0, yin = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] + a[j] == x)
                {
                    count = 1;
                    xin = a[i];
                    yin = a[j];
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if (count == 1)
            cout << "true"
                 << " " << xin << " " << yin << " " << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}
//url: https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/