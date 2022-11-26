#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int input;
		int a[n];
		int b[n];
		multimap<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			
		}
		for(int i=0;i<n;i++){
			m.insert({b[i],a[i]});
		}
		int i=0;
		for(auto it:m){
			//<<it.first <<" "<<it.second<<endl;
			a[i]=it.second;
			b[i]=it.first;
			i++;
		}
		int max=b[0];
		int count=1;
		for(int i=1;i<n;i++){
			if(a[i]>=max){
				max = b[i];
				count++;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}

