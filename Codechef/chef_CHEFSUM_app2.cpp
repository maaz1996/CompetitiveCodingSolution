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
        int a[n + 1];
        int fullsum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            fullsum = fullsum + a[i];
        }

        int index = -1;
        int max = INT_MAX;
        for (int i = n; i > 0; i--)
        {
            if (a[i] <= max)
            {
                max = a[i];
                index = i;
            }
        }
        cout << index << endl;
    }

    return 0;
}

//url:https://www.codechef.com/problems/CHEFSUM