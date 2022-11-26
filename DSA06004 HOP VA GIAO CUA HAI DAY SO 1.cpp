
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000
#define rs(M,x) memset(M,x,sizeof(M))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

int main() {
	tester(){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		F(i,0,n) cin>>a[i];
		F(i,0,m) cin>>b[i];
		vector<int> v;
		set<int> st;
		F(i,0,n) st.insert(a[i]);
		F(i,0,m) st.insert(b[i]);
		F(i,0,n){
			F(j,0,m){
				if(a[i]==b[j]){
					v.pb(a[i]);
				}
			}
		}
		for(auto i:st){
			cout<<i<<" ";
		}
		cout<<endl;
		for(auto i:v){
			cout<<i<<" ";
		}
		cout<<endl;
	}
    return 0;
}





