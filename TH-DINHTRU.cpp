
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
const int N = 10005, inf = N;
int n,m,low[N],num[N], pa[N];
vector<int> a[N];

void dfs(int u){
	num[u]= ++ num[0];
	low[u]=inf;
	for(auto v :a[u]){
		if(v==pa[u]) continue;
		if(num[v]) low[u] = min(low[u],num[v]);
		else{
			pa[v]=u;
			dfs(v);
			low[u]= min(low[u],low[v]);
		}
	}
}

int find_khop(){
	int khop[N]={0}, con[N]={0};
	for(int v=1;v<=n;v++){
		int u = pa[v];
		if(u>0) con[u]++;
	}
	for(int v=1;v<=n;v++){
		int u = pa[v];
		if(u>0 && pa[u] > 0 && low[v]>= num[u]) khop[u]=1;
	}
	for(int u=1;u<=n;u++){
		if(pa[u]==0&&con[u]>=2) khop[u]=1;
	}
	for(int u=1;u<=n;u++) khop[0]+= khop[u]==1;
	return khop[0];
}

int find_cau(){
	int cau=0;
	for(int v=1;v<=n;v++){
		cau+= pa[v] > 0 && low[v] >= num[v];
	}
	return cau;
}
int main() {
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		a[u].emplace_back(v);
		a[v].emplace_back(u);
	}
	for(int u=1;u<=n;u++) if(!num[u]) dfs(u);
	cout<<find_khop()<<" "<<find_cau()<<endl;
    return 0;
}





