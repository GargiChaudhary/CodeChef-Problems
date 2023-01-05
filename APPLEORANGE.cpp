// Problem Link: https://www.codechef.com/problems/APPLEORANGE

#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

void solve(){
    int a, b;
	cin>>a>>b;
	cout<<gcd(a, b)<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
