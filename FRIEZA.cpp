// Problem Link: https://www.codechef.com/problems/FRIEZA

#include <iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    char name[6] = {'f', 'r', 'i', 'e', 'z', 'a'};
    int g = 0, b= 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            if(s[i] == name[j]){
                if(b != 0){
                    cout<<b;
                }
                g++;
                b=0;
                j=6;
            }
            else{
                if(j==5){
                    if(g != 0){
                        cout<<g;
                    }
                    b++;
                    g=0;
                }
            }
        }
    }
    if(g != 0) cout<<g;
    if(b != 0) cout<<b;
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
