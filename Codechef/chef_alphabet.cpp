#include <bits/stdc++.h>
using namespace std;

int main() {
    
	// your code goes here
	string s;
	cin>>s;
	int n;
	cin>>n;
	while(n--)
	{
	    string w;
	    cin>>w;
	    int t=0;
	    for(int i=0;i<s.size();i++)
	    {
	        for(int j=0;j<w.size();j++){
	        if(w[j]==s[i])
	        {t++;
	        
	        }
	    }
	    }
	   // cout<<t;
	    if(t==w.size())
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	
	return 0;
}
