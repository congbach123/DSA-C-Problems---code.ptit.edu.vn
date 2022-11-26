#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int sum=0;
int a[100005];
void solve(int i,int j){
	int max=a[i];
	for(int t=i;t<=j;t++){
		if(a[t]>=max) max = a[t];
	}
	sum+=max;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++){
				solve(i,j);
			}
		}	
		cout<<sum<<endl;
	}
	

	return 0;
}

