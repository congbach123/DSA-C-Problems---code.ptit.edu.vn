
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
vector<int> d[1005];
int check[1005], flag[1005];
void init(){
	for(int i=1;i<=n;i++){
		check[i]=0;
		flag[i]=1;
	}
}

void similar(){
	for(int i=1;i<=n;i++){
		if(check[i]==1 && flag[i] == 1){
			flag[i]=1;
		}
		else flag[i]=0;
	}
}

void solve(int r,int end){
	if(r==end){
		similar();
	}
	else{
		for(int i=0;i<d[r].size();i++){
			int v=d[r][i];
			if(check[v]==0){
				check[v]=1;
				solve(v,end);
				check[v]=0;
			}
		}
	}
}
int main() {
	tester(){
		cin>>n>>m>>u>>v;
		for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		d[x].pb(y);
		
		}
		
		init();
		check[u]=1;
		solve(u,v);
		check[u]=0;
		int count = 0;
		for(int i=1;i<=n;i++){
			if(i!=u && i!= v && flag[i]==1) count ++;
			
		}
		cout<<count<<endl;
		for(int i=1;i<=100;i++){
			d[i].clear();
		}
	}
	
    return 0;
}





