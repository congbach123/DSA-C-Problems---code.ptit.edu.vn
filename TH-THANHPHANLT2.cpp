
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
const int N=5e3 + 1;
int n,d[N],check,m;

vector<int> a[N];

void dfs(int u,int count){
	d[u]=count;
	for(auto v : a[u]){
		if(v==check) continue;
		if(d[v]!=0) continue;
		dfs(v,count);
	}
}
int main() {
	cin>>n>>m;
	for(int i = 1;i<=m;i++){
		int u,v; cin>>u>>v;
		a[u].pb(v);
		a[v].pb(u);
	}
	for(int i = 1;i<=n;i++){
		check =i;
		for(int i = 1;i<=n;i++){
			d[i]=0;
		}
		d[check]=-1;
		int cnt=0;
		for(int i = 1;i<=n;i++){
			if(d[i]==0) dfs(i,++cnt);
		}
		cout<<cnt<<endl;
		
	}
    return 0;
}





