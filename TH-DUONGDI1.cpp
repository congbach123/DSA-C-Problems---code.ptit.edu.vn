
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
int n,m,u,v;
int par[10005];
bool check[10005];
vector<int> ke[10005];
int trace[10005];

void in(){
	for(int i =0;i<1005;i++){
		ke[i].clear();
	}
	cin>>n>>m>>u>>v;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
	}
	memset(check,false,sizeof(check));
	memset(par,0,sizeof(par));
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u]= true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		
		for(int x:ke[v]){
			if(!check[x]){
				check[x]=true;
				q.push(x);
				par[x]=v;
			}
		}
	}
	
}

void path(int u, int v){
	bfs(u);
	if(!check[v]){
		cout<<-0<<endl;
	}
	else{
		vector<int> path;
		while(v!=u){
			path.pb(v);
			v=par[v];
		}
		path.pb(u);
		reverse(path.begin(),path.end());
		for(int x:path) cout<< x << " ";
	}
}
int main() {
	tester(){
		in();
		path(u,v);
		cout<<endl;
	}
    return 0;
}





