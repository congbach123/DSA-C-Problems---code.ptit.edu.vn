#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int a[100];
	a[0]=a[1]=0;
	int n;
	cin>>n;
	
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+pow(2,i-2);
	}
	cout<<a[n]<<endl;
	return 0;
}

