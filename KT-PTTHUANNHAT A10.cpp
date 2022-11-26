#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[10005];
	a[0]=4;a[1]=8;
	for(int i=2;i<=n;i++){
		a[i]= a[i-1]+2*a[i-2];
	}
	cout<<a[n]<<endl;
	return 0;
}

