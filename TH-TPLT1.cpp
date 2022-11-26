
#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll n,m,x;
ll parent[100005]={0};
ll sz[100005]={0};

void in(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
}

ll Find(ll u){
	if(u== parent[u]) return u;
	else return parent[u] = Find(parent[u]);
}

void Union(ll u, ll v){
	u = Find(u);
	v = Find(v);
	if(u==v) return;
	if(sz[u] < sz[v]){
		parent[u]=v;
		sz[v]+=sz[u];
	}
	else{
		parent[v]=u;
		sz[u]+= sz[v];
	}
}

void solve(){
	cin>>n>>m>>x;
	in();
	for(int i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;
		Union(a,b);
	}
	vector<ll> res;
	for(int i=1;i<=n;i++){
		if(parent[i]!= parent[x]) res.push_back(i);
	}
	if(res.size()==0) cout << "0\n";
	else for(auto x:res) cout << x << endl;
}
int main() {
	solve();
    return 0;
}





