#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        // int m=1;
        string s;
        std::ostringstream k;
        int t = 0;
        cin >> s;

        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (s[i] == s[i + 1])
            {
                t++;
            }
            else
            {

                k << s[i] << (t + 1);
                t = 0;
            }
        }
        int size2 = k.str().size();
        if (size2 < size)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
