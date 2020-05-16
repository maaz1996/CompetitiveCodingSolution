#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int j = 0;
        int w;
        string s;
        cin >> w;
        cin >> s;
        int a[7] = {4, 4, 4, 4, 4, 4, 4};
        string str[] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
        for (int i = 0; i < 7; i++)
        {
            if (str[i] == s)
            {
                j = i;
                while (w % 7 != 0)
                {
                    a[j++] = 5;
                    w--;
                    //if j=7; sunday occurs then we have to change to monday to have index 0
                    if (j == 7)
                        j = 0;
                }
            }
        }
        for (int i = 0; i < 7; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//url: https://www.codechef.com/submit/NW1