#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int len;
	    cin>>len;
	    string s;
	    cin>>s;
	    int c=0;
	    for (int j=0;j<len-1;j++)
	    {
	        if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u')
	        {
	            if(s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u')
	            {
	                c++;
	            }
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
