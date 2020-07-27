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
        int a[n];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int min = 1000, max = 0, inf = 1, diff;
        for (int i = 1; i < n; i++)
        {
            diff = a[i] - a[i - 1];
            if (diff <= 2)
            {
                inf++;
            }
            else
            {
                if (min > inf)
                    min = inf;
                if (inf > max)
                    max = inf;
                inf = 1;
            }
        }
        if (min > inf)
            min = inf;
        if (inf > max)
            max = inf;

        cout << min << " " << max << endl;
    }
    return 0;
}

//problem url: https://www.codechef.com/submit/COVID19