
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

//INPUT
/*
1

6 9 5

1 2

1 3

2 3

2 4

3 4

3 5

4 5

4 6

5 6
*/
int n,m,z;
vector<int> adj[1001];
bool visited[1001];

void input(){
	//adj.clear();
	cin>>n>>m>>z;
	F(i,0,m){
		int x,y; cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	cout<<u<<" ";
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main() {
	tester(){
		adj[1001] = vector<int>();
		input();
		dfs(z);
		cout<<endl;
	}
    return 0;
}





