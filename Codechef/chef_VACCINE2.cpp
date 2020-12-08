#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin >> n >> d;
        long long a[n];
        int cinfected = 0, cok = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 80 || a[i] <= 9)
                cinfected++;
        }
        cok = n - cinfected;

        int d1 = 0, d2 = 0;

        if (cok % d == 0)
        {
            d1 = cok / d;
        }
        else
        {
            d1 = (cok / d) + 1;
        }
        if (cinfected % d == 0)
        {
            d2 = cinfected / d;
        }
        else
        {
            d2 = (cinfected / d) + 1;
        }

        cout << d1 + d2 << endl;
    }
    return 0;
}

//url:https://www.codechef.com/DEC20B/problems/VACCINE2