#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<ll> st1, st2;

        for (ll i = 0; i < 4 * n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (st1.find(x) != st1.end())
            {
                st1.erase(st1.find(x));
            }
            else
                st1.insert(x);

            if (st2.find(y) != st2.end())
            {
                st2.erase(st2.find(y));
            }
            else
                st2.insert(y);
        }

        cout << *st1.begin() << " " << *st2.begin() << endl;
    }
    return 0;
}

//url:https://www.codechef.com/JULY20B/problems/PTMSSNG/