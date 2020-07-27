#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int k=0;
	    cin>>s;
	    char a=s[0];
	    char b=s[1];
//	    cout<<s.size();
        if(a==b)
        {W
            cout<<"NO"<<endl;
            continue;
        }
	    for(int i=2;i<s.size();i++)
	    {   //cout<<i<<s[i];
	        if(i%2==0 and s[i]!=a)
	        {   k=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	        if(i%2!=0 and s[i]!=b)
	        {   k=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(k==0)
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
