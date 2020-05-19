#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double finalsum = 0;
        string str[n];
        for (int i = 0; i < n; i++)
            cin >> str[i];

        for (int ii = 0; ii < n; ii++)
        {
            string s;
            s = str[ii];
            double count = 0.2;
            int k = s.size();
            for (int i = 1; i < k; i++)
            {
                if (s[i - 1] == 'f' || s[i - 1] == 'd')
                {
                    if (s[i] == 'j' || s[i] == 'k')
                    {
                        count = count + 0.2;
                    }
                    else
                    {
                        count = count + 0.4;
                    }
                }
                else if (s[i - 1] == 'j' || s[i - 1] == 'k')
                {
                    if (s[i] == 'd' || s[i] == 'f')
                    {
                        count = count + 0.2;
                    }
                    else
                    {
                        count = count + 0.4;
                    }
                }
            }

            for (int l = 0; l < ii; l++)
            {

                if (s == str[l])
                {
                    count = count / 2;
                    break;
                }
            }
            finalsum = finalsum + count;
        }
        cout << finalsum * 10 << endl;
    }
    return 0;
}

//url:https://www.codechef.com/problems/TYPING