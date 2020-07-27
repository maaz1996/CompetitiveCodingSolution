#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << j;
            }
            else
            {

                cout << j << "+";
            }
        }

        k = k + i;
        cout << "=" << k << endl;
    }
    return 0;
}

//link:https://www.linkedin.com/posts/coding-club_google-google-codingmafia-activity-6657849643143127040-Xstg