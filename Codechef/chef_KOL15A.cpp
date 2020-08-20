#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                sum = sum + (s[i] - 48);
            }
        }
        cout << sum << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/KOL15A