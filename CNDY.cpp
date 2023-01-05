// Problem Link: https://www.codechef.com/problems/CNDY

#include <iostream>
#include<map>
using namespace std;

bool solve(){
    int n;
    cin>>n;
    n = 2*n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    map<int, int> m;
    for(auto i : arr){
        m[i]++;
    }
    for(auto i : m){
        if(i.second > 2) return 0;
    }
    return 1;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    bool ans = solve();
	    if(ans) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
