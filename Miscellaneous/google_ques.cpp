#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s = "13579";

    for (int i = 0; i < s.size(); i++)
    {
        cout << (s[i] - '0' + 2) % 10 << endl;
    }
    return 0;
}

//question link: https://www.linkedin.com/posts/coding-club_google-google-codingmafia-activity-6657615274872795136-oyEV
