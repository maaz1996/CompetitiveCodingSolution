#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long max = 0;
        long n, b;
        cin >> n >> b;
        for (int i = 0; i < n; i++)
        {
            long w, h, p;
            cin >> w >> h >> p;
            long prod = w * h;
            if (b >= p && prod > max)
            {
                max = prod;
            }
        }
        if (max == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    return 0;
}
