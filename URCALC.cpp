//Problem Link: https://www.codechef.com/problems/URCALC

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b;
	cin>>a>>b;
	char c;
	cin>>c;
	switch(c){
	    case '+':
	        cout<<a+b<<endl;
	        break;
	    case '-':
	        cout<<a-b<<endl;
	        break;
	    case '*':
	        cout<<fixed<<setprecision(1)<<a*b<<endl;
	        break;
	    case '/':
	        cout<<fixed<<setprecision(8)<<a/b<<endl;
	        break;
	}
	return 0;
}
