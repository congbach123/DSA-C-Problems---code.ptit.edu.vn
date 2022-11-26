#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string s;
bool solve(int l,int r){
	while(l<r){
		if(s[l]!=s[r]){
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main(){
	
	cin>>s;
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		if(solve(l-1,r-1)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}

