//Problem Link: https://www.codechef.com/problems/SNAKPROC

#include <iostream>
using namespace std;

bool solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int h = 0, t = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'H'){
            h++;
            if(h-t != 1) return 0;
        }
        else if(s[i] == 'T'){
            t++;
            if(t == 1 && h == 0) return 0;
        }
    }
    if(h == 0 && t == 0) return 1;
    else if(h!=t) return 0; 
    return 1;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    bool ans = solve();
	    if (ans) cout<<"Valid"<<endl;
	    else cout<<"Invalid"<<endl;
	}
	return 0;
}
