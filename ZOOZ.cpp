// Problem Link: https://www.codechef.com/problems/ZOOZ

#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1) cout <<'1';
        else cout <<'0';
    }
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
