#Link to Problem : https: //www.codechef.com/submit/CHN15A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long a[n];
        long sum = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] + k;
            if (a[i] % 7 == 0)
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
#Link to Problem : https: //www.codechef.com/submit/CHN15A