#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,k,b[10005];
void sinh( int B[], int n ){
    int i = n;
    while (i > 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if(i == 0) return;
    else b[i] = 1;
}
void in(){
	for(int i=1;i<=n;i++){
		cout<< b[i] << " ";
	}
	cout<<endl;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sinh(b,n);
	in();

	return 0;
}

