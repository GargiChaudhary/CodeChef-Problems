//Problem Link: https://www.codechef.com/problems/ENCMSG

#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 1; i < n; i += 2){
        swap(s[i],s[i-1]);
    }
    for(int i = 0; i < n; i++){
        s[i] = 'a' + ('z' - s[i]);
    }
    cout<<s<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
