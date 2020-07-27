#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long count = 0;
        long l, r;
        cin >> l >> r;
        for (long i = l; i <= r; i++)
        {
            long rem = i % 10;
            if (rem == 2 || rem == 3 || rem == 9)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
