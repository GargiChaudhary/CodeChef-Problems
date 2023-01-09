//Problem Link: https://www.codechef.com/problems/DIET

#include <iostream>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    int ans = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        ans += arr[i];
        if(ans<k){
            cout<<"NO "<<i+1<<endl;
            return;
        }
        ans -= k;
    }
    cout<<"YES"<<endl;
}

int main() {
    int t;
    cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
