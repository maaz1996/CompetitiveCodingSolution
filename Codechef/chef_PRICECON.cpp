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
        int a[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > k)
            {
                sum = sum + (a[i] - k);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
//url: https://www.codechef.com/JUNE20B/problems/PRICECON