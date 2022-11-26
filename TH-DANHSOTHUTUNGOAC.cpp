#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		//cout<<s;
		stack<char> st1;
		stack<int>st2;
		int dem=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st1.push(s[i]);
				cout<<dem<<" ";
				st2.push(dem);
				dem++;
			}
			if(s[i]==')'){
				cout<<st2.top()<<" ";
				st1.pop();
				st2.pop();
			}
		}
		cout<<endl;
	}

	return 0;
}

