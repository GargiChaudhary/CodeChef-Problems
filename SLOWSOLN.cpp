//Problem Link: https://www.codechef.com/problems/SLOWSOLN

#include <iostream>
using namespace std;

void solve(){
    int T, N, S;
    cin>>T>>N>>S;
    int s = S/N;
    int r = S%N;
    if(s < T){
        cout<<s*N*N + r*r<<endl;
    }else{
        cout<<T*N*N<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
