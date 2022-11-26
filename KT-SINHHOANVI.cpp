#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int N;
int a[1005];
void sinh( int B[]){
    int j,k,r,s,t;
    j = N;
    while (B[j] > B[j + 1]) j--;
    k = N;
    while (B[j] > B[k]) k--;
    t = B[j]; B[j] = B[k]; B[k] = t;
    r = j + 1; s = N; 
    while(r < s){
        t = r; r = s; s = t;
    }
}
void in(){
	for(int i=1;i<=N;i++){
		cout<<a[i]<<" ";
	} cout<<endl;
}
int main(){
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>a[i];
	}
	sinh(a);
	in();
	return 0;
}

