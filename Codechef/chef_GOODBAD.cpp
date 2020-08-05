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
        cin >> n >> k;
        string s;
        cin >> s;
        int csmall = 0, cbig = 0;
        for (int i = 0; i < n; i++)
        {
            if (isupper(s[i]))
            {
                cbig++;
            }
            else if (islower(s[i]))
            {
                csmall++;
            }
        }

        if (csmall > k && cbig <= k)
        {
            cout << "chef" << endl;
        }
        else if (csmall <= k && cbig > k)
        {
            cout << "brother" << endl;
        }
        else if (csmall > k && cbig > k)
        {
            cout << "none" << endl;
        }
        else if (csmall <= k && cbig <= k)
        {
            cout << "both" << endl;
        }
    }
    return 0;
}

//url:https://www.codechef.com/problems/GOODBAD