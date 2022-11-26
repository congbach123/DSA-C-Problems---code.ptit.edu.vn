#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
int res=0;
int a[15][15];

bool isSafe(int col, int row, int n) {
  //check for same column
    for (int i = 0; i < row; i++) {
        if (a[i][col]) {
            return false;
        }
    }
    //check for upper left diagonal
    for (int i = row,j = col;i >= 0 && j >= 0; i--,j--) {
        if (a[i][j]) {
            return false;
        }
    }
    //check for upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; j++, i--) {
        if (a[i][j]) {
            return false;
        }
    }
    return true;
}

void in(){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}
}

void Try(int N){
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			
			if(!bichan(i,j)){
				a[i][j]=1;
				if(N==0){
				res++;
		
			}
			else Try(N-1);
			a[i][j]=0;	
			} 
			
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		int a[n+5][n+5];
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				a[i][j]==0;
			}
		}
		/*
		in();
		dathau(1,1);
		in();
		*/
		Try(n);
		cout<<res<<endl;
		
	}

	return 0;
}

