#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
int cnt=0;
int a[1005];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void solve(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) in();
		else {
			solve(i+1);
			cnt++;
		}
	}
}
int main(){
	cin>>n;
	solve(2);
	cout<<cnt;

	return 0;
}

