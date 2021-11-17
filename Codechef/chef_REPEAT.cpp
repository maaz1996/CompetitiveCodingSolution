#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,k,s;
	    cin>>n>>k>>s;
	    long long int a[n];
	    a[0]=1;
	    for(int i=1;i<n;i++){
	        a[i]=a[i-1]+2;
	    }
	    int sum1=0;
	    int x=0;
	    for(int i=0;i<n;i++){
	        x=k*a[i];
	       for(int j=0;j<n;j++){
	           if(j==i)
	           continue;
	           else
	            sum1=sum1+a[j];
	    }
	    if(x+sum1==s){
	        cout<<a[i]<<endl;
	        break;
	    }
	    else 
	    sum1=0;
	    
	    }
	    
	}
	return 0;
}

//url:https://www.codechef.com/problems/REPEAT