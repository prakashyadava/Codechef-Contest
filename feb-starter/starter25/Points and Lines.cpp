#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    set<int> ver;
	    set<int> hor;
	    int x,y;
	    while(n--){
	        cin>>x>>y;
	        
	        ver.insert(x);
	        hor.insert(y);
	    }
	    cout<<ver.size()+hor.size()<<endl;
	}
	
	return 0;
}
