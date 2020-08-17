#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int tc, tr;
        cin >> tc >> tr;

        int s1 = tc / 9;
        int s2 = tr / 9;
        int rem1 = tc % 9;
        int rem2 = tr % 9;
        if (s1 == s2)
        {
            cout << "1"
                 << " " << s1 + 1 << endl;
        }
        else if (s1 > s2)
        {
            if (rem2 == 0)
                cout << "1"
                     << " " << s2 << endl;
            else
                cout << "1"
                     << " " << s2 + 1 << endl;
        }
        else if (s1 < s2)
        {
            if (rem1 == 0)
                cout << "0"
                     << " " << s1 << endl;
            else
                cout << "0"
                     << " " << s1 + 1 << endl;
        }
    }
    return 0;
}
//url: https://www.codechef.com/AUG20B/problems/CRDGAME3/