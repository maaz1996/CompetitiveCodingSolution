#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n, rem = 0;
        cin >> n;
        while (n != 0)
        {

            rem = rem * 10 + n % 10;
            n = n / 10;
        }
        cout << rem << endl;
    }
    return 0;
}

//url: https://www.codechef.com/submit/FLOW007