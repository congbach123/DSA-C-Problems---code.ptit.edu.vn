#include <bits/stdc++.h>
#define ll long long int
using namespace std;
char c;
int check=1;
int n;
int k;
int b[100005];
bool used[100005];
void in(){
	for(int i=2;i<n;i++){
		if((b[i]==1 || b[i]==5) && ((b[i-1] !=1 && b[i-1]!=5) && (b[i+1] !=1 && b[i+1]!=5) ) )
		{
			check =0;
			
		}
		
		
	}
	if(check==1){
		for(int i=1;i<=n;i++){
		cout<< (char)(b[i]+64);
		}
		cout<<endl;
	}
	check=1;
}
void solve(int i){
	for (int j = 1; j <= n; j++) {
        
        if (!used[j]) {
            b[i] = j; 
            used[j] = 1;
            if (i == n)
                in();
            else
                solve(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
	cin>>c;
	n=(int)c-64;
	cout<<n;
	solve(1);

	return 0;
}

