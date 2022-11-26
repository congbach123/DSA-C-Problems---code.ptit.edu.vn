#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int b[n];
		for(int i=0;i<n;i++){
			b[i]=a[i];
		}
		sort(b,b+n);
		int flag =1;
		for(int i=0;i<n;i++){
			if(a[i]==b[i]||a[i]==b[n-i-1]){
				
			}
			else flag = 0;
		}
		if(flag ==1) cout<<"Yes"<<endl;
		else cout << "No"<<endl;
	}

	return 0;
}

