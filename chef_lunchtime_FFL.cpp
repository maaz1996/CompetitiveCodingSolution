#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--)
	{ long count=0;
	    long n,s;
	    cin>>n>>s;
	    long a[n],b[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]==0){
	            for(int j=i+1;j<n;j++)
	            {
	                if(b[j]==1 && a[i]+a[j]<=(100-s))
	                {
	                    count=1;
	                }
	            }
	        }
	            else if(b[i]==1)
	            {
	                for(int j=i+1;j<n;j++){
	                    if(b[j]==0 && a[i]+a[j]<=(100-s))
	                    {
	                        count=1;
	                    }
	                }
	            }
	        
	    }
	    
	    
	    if(count==1)
	    {
	        cout<<"yes"<<endl;
	    }
	     else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}

//link: https://www.codechef.com/LTIME83B/problems/FFL