#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int price = 0, local = 0;
        int n, k;
        cin >> n >> k;
        int t[10000], d[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> t[i] >> d[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (k == 0)
            {
                price = price + t[i] * d[i];
            }
            else
            {
                local = k;
                k = k - t[i];
                if (k < 0)
                {
                    t[i] = t[i] - local;
                    price = price + t[i] * d[i];
                    k = 0;
                }
            }
        }
        cout << price << endl;
    }
    return 0;
}
