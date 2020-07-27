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
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long diff = 0, sum = 0;
        for (int i = 1; i < n; i++)
        {
            diff = abs(a[i] - a[i - 1]);
            sum = sum + diff - 1;
        }
        cout << sum << endl;
    }
    return 0;
}

//url:https://www.codechef.com/JULY20B/problems/CHEFSTR1