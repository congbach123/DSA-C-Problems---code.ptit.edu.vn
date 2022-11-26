#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,k,b[10005];
void sinh( int B[], int k ){
    int i = k;
    while (B[i] == n - k + i) i--;
    B[i]++;
    for(int j = i + 1; j <= n; j++) B[j] = B[i] + j - i; 
}
void in(){
	for(int i=1;i<=k;i++){
		cout<< b[i] << " ";
	}
	cout<<endl;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>b[i];
	}
	sinh(b,k);
	in();

	return 0;
}

