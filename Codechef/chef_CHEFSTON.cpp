#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long profit = 0, max = 0;

        for (int i = 0; i < n; i++)
        {
            int mul = 1;
            while ((mul * a[i]) <= k)
            {
                mul++;
            }

            profit = (mul - 1) * b[i];
            if (profit > max)
            {
                max = profit;
            }
        }
        cout << max << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/CHEFSTON