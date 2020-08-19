#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        std::vector<long long int> f(26, 0);
        for (int i = 0; i < n; i++)
            f[s[i] - 'a']++;

        while (q--)
        {
            long long int isol;
            cin >> isol;
            long long int count = 0;
            for (int i = 0; i < 26; i++)
            {
                if (f[i] > isol)
                {
                    count += f[i] - isol;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}

//url: https://www.codechef.com/problems/CORUS