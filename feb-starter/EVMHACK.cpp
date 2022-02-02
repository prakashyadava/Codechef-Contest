#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,p,q,r;
	    float chk = 0;
	    cin>>a>>b>>c>>p>>q>>r;
	    
	    chk = (p + q + r)/2;
	    if((p+b+c) > chk){
	        cout<<"YES"<<endl;
	    }else if((a+q+c) > chk){
	        cout<<"YES"<<endl;
	    }else if((a+b+r) > chk){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
