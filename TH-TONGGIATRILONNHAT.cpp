#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int solve(int m,int n, int a[],int b[]){
	int kq[n+1][m+1];
	memset(kq, 0, sizeof(kq));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			kq[i][j]= kq[i-1][j];
			if(j>=a[i]){
				kq[i][j]= max(kq[i][j], kq[i-1][j-a[i]]+b[i]);
			}
		}
	}
	return kq[n][m];
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1];
	int b[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	cout<< solve(m,n,a,b);

	return 0;
}

