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
        int a[10];
        int p;
        for (int i = 1; i <= 5; i++)
            cin >> a[i];

        cin >> p;
        for (int i = 1; i <= 5; i++)
        {
            a[i] = a[i] * p;
            sum = sum + a[i];
        }

        if (sum <= 120)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}

//url:https://www.codechef.com/LTIME84B/problems/LOSTWKND/