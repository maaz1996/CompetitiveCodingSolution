#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  
	    int n;
	    cin>>n;
	 unordered_set<ll>st1,st2;
	
	    for(ll i=0;i<4*n-1;i++){
	         ll x,y;
	        cin>>x>>y;
	        if(st1.find(x)!=st1.end()){
	            st1.erase(x);
	        }
	        else 
	        st1.insert(x);
	        
	    if(st2.find(y)!=st1.end()){
	            st2.erase(y);
	        }
	        else st2.insert(y);
	    }
	    
	   cout<<*st1.begin()<<" "<<*st2.begin()<<endl;
	}
	return 0;
}

//url:https://www.codechef.com/JULY20B/problems/PTMSSNG/