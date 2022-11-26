#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		stack<ll> st;
		int l=s.size();
		
		for(int i=0;i<l;i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%'){
				ll a = st.top();
				st.pop();
				ll b = st.top();
				st.pop();
				ll res;
				if(s[i]=='+') res = b+a;
				else if(s[i]=='-') res = b-a;
				else if(s[i]=='*') res = b*a;
				else if(s[i]=='/') res = b/a;
				else if(s[i]=='%') res = b%a;
				//else if(s[i]=='^') res = b^a;
				st.push(res);
			}
			else st.push((ll)(s[i]-'0'));
		}
		
		cout<<st.top()<<endl;
	}

	return 0;
}

