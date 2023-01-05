//Problem Link: https://www.codechef.com/problems/EZSPEAK

#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string word;
    cin>>word;
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    int c = 0;
    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < 5; j++){
            if(word[i] == arr[j]){
                c = 0;
                break;
            }
        }
        if(j==5) c++;
        if(c == 4){
            cout<<"NO"<<endl;
            return;
        }
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
