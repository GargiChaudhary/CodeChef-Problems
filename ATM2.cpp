//Problem Link: https://www.codechef.com/problems/ATM2

#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] <= k){
            cout<<"1";
            k = k - arr[i];
        }
        else{
            cout<<"0";
        }
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
