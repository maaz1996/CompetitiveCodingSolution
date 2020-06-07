#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long count = 0;
        string s;
        cin >> s;
        long long k = s.size();
        for (long long i = 0; i < k; i++)
        {
            if (s[i] == 'x' && s[i + 1] == 'y')
            {
                // cout<<"maaz";
                count++;
                i++;
            }
            else if (s[i] == 'y' && s[i + 1] == 'x')
            {
                //  cout<<"deeee";
                count++;
                i++;
                // cout<<i<<" joker ";
            }
        }
        cout << count << endl;
    }
    return 0;
}

//url:https://www.codechef.com/JUNE20B/problems/XYSTR