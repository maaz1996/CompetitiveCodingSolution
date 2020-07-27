#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long sum = 0;
        long long xa = 0, xb = 0;
        long long n;
        cin >> n;
        long long a[n + 1], b[n + 1];
        for (long long i = 1; i <= n; i++)
            cin >> a[i];

        for (long i = 1; i <= n; i++)
            cin >> b[i];

        for (long long j = 1; j <= n; j++)
        {
            xa = xa + a[j];
            xb = xb + b[j];
            if (a[j] == b[j] && xa == xb)
            {
                sum = sum + a[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}

//url:https://www.codechef.com/LTIME84B/problems/WWALK