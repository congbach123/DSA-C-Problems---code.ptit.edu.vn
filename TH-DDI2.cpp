
#include<bits/stdc++.h>
using namespace std;

typedef double db;
const long long mod = 1e9 + 7;
#define ll long long
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
ll n,m,a,b;
vector<vector<ll>> v(100000);
ll parent[100005];
ll check[100005];

void bfs(ll x){
	queue<ll> q;
	q.push(x);
	check[x]=1;
	while(q.size()!=0){
		ll xet = q.front(); q.pop();
		for(auto i:v[xet]){
			if(check[i]==0){
				q.push(i);
				check[i]=1;
				parent[i] = xet;
			}
		}
	}
}

void solve(){
	cin>>n>>m>>a;
	memset(parent,0,sizeof(parent));
	memset(check,0,sizeof(check));
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(a);
	for(int i=1;i<=n;i++){
		if(i==a) continue;
		if(check[i]==0){
			cout<<"No path\n";
			continue;
		}
		cout<<a<<" ";
		ll xet = i;
		vector<ll> res;
		while(a!= xet){
			res.push_back(xet);
			xet = parent[xet];
		}
		reverse(res.begin(),res.end());
		for(auto x:res) cout<< x << " ";
		cout<<endl;
	}
}
int main() {
	tester(){
		solve();
	}
    return 0;
}





