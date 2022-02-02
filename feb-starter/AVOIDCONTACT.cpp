#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        if(y==1){
	            cout<<y<<endl;
	        }
	        else{
	            cout<<(y*2)-1<<endl;
	        }
	    }
	    else if(y==0){
	        cout<<x<<endl;
	    }else{
	        int n = (y*2) + (x-y);
	        cout<<n<<endl;
	    }
	}
	
	return 0;
}
