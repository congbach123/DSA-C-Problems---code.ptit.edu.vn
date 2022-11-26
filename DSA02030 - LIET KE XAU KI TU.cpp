#include <bits/stdc++.h>
#define ll long long int
using namespace std;
char c;
int n;
int k;
int b[100005];
void in(){
	for(int i=1;i<=k;i++){
		cout<< (char)(b[i]+65);
	}
	cout<<endl;
}
void solve(int i){
	for(int j=b[i-1];j<n;j++)
	{
		b[i]=j;
		if(i==k) in();
		else solve(i+1);
	}
}

int main(){
	cin>>c>>k;
	n=(int)c-64;
	//cout<<n;
	solve(1);

	return 0;
}

