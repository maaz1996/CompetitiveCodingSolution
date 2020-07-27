#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        for (int l = 0; l < g; l++)
        {

            int I, n, Q;

            cin >> I >> n >> Q;

            if (Q == 1 && I == 1 || Q == 2 && I == 2)
            {
                cout << n / 2;
            }
            else if ((Q == 1 && I == 2) || (Q == 2 && I == 1))
            {
                (n % 2 == 0) ? cout << n / 2 : cout << (n / 2) + 1;
            }

            cout << endl;
        }
    }
    return 0;
}
//url: https://www.codechef.com/problems/CONFLIP