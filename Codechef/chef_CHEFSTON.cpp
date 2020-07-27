#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int profit = 0, max = 0;

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