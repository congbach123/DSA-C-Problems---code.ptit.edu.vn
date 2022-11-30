#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include<bits/stdc++.h>

#define ll long long
int n,a[1005];
using namespace std;
void in(){
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}

void solve(){
	int i=n-1;
	
}
int main(){
	cin.sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
		reverse(a+1,a+n+1);
		do {
			in();
		}
		while(prev_permutation(a+1,a+1+n));
		cout<<endl;
		
	}
}





