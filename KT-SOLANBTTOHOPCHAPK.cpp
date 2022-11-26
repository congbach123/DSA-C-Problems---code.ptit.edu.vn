#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,k;
int a[10005];
int cnt=0;
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	return;
}
void solve(int j){
	for(int i=a[j-1]+1; i<=n-k+j;i++){
		a[j]=i;
		if(j==k) in();
		else{
			solve(j+1);
			cnt++;
		}
	}
	return;
}
int main(){
	cin>>n>>k;
	solve(1);
	cout<<cnt<<endl;
	return 0;
}

