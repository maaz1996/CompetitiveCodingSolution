#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[n + 2];
        cin >> n;
        int fullsum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            fullsum = fullsum + a[i];
        }

        int suffixsum[n + 2], prefixsum[n + 2];
        int index = 1;
        suffixsum[1] = fullsum;
        prefixsum[1] = a[1];
        int sum = suffixsum[1] + prefixsum[1];
        int loopsum;
        for (int i = 2; i <= n; i++)
        {
            suffixsum[i] = fullsum - prefixsum[i - 1];
            prefixsum[i] = prefixsum[i - 1] + a[i];
            loopsum = prefixsum[i] + suffixsum[i];
            if (loopsum < sum)
            {
                sum = loopsum;
                index = i;
            }
            if (loopsum == sum && i < index)
            {
                index = i;
            }
        }
        cout << index << endl;
    }

    return 0;
}

//url: https://www.codechef.com/problems/CHEFSUM