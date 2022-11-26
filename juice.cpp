#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int64_t n,a,b,c,d,ans;
	cin>>n>>a>>b>>c;
	d=b-c;
	if(a<=d) ans=n/a;
		else{
			ans =(n-b)/d+1;
			n-=ans*d;
			ans+=n/a;
		}
	cout<<ans;
	return 0;
}

