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
        long rem;
        long long n;
        cin >> n;
        while (n != 0)
        {
            rem = n % 10;
            //cout<<rem;
            if (rem == 4)
            {
                count++;
            }
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}

//url: https://www.codechef.com/submit/LUCKFOUR