
#include<bits/stdc++.h>
#include<queue>
#define ll long long
using namespace std;

int n,m,u,v;
int par[1005];
bool check[1005];
vector<int> ke[1005];


void in(){
	for(int i =0;i<1005;i++){
		ke[i].clear();
	}
	cin>>n>>m>>u;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
	memset(par,0,sizeof(par));
	memset(check,false,sizeof(check));
	
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u]= true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		
		for(auto x:ke[v]){
			if(!check[x]){
				check[x]=true;
				q.push(x);
				par[x]=v;
			}
		}
	}
	
}

void Path(int u, int v){
	memset(check,false,sizeof(check));
	bfs(u);
	if(!check[v]){
		cout<<"No path";
	}
	else{
		vector<int> path;
		while(v!=u){
			path.push_back(v);
			v=par[v];
		}
		path.push_back(u);
		reverse(path.begin(),path.end());
		for(int x:path) cout<< x << " ";
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		in();
		for(int i=1;i<=n;i++){
			if(i==u) continue;
			else{
				Path(u,i);
				cout<<endl;
			}
		}
		cout<<endl;
	}
		
	
    return 0;
}





