#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    int ans=0;
	    cin>>n>>m>>k;
	    int diff = abs(n-m);
	    if(diff>=k){
	        ans = abs(diff-k);
	    }
	    else{
	        ans=0;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
//url: https://www.codechef.com/submit/FRUITS