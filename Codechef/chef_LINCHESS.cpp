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
        int num;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int min = INT_MAX;
        int count, step;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > k)
            {
                continue;
            }
            else
            {
                count = 0;
                step = a[i];
                while (step <= k)
                {
                    step = a[i] + step;
                    count++;
                    if (step == k && count < min)
                    {
                        min = count;
                        num = a[i];
                    }
                }
            }
        }
        if (min == INT_MAX)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << num << endl;
        }
    }

    return 0;
}

//url:https://www.codechef.com/AUG20B/problems/LINCHESS