#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int a[100];
	a[1]=2,a[2]=4,a[3]=7;
	int n;
	cin>>n;
	
	for(int i=4;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	cout<<a[n]<<endl;
	return 0;
}
// x1 + x2 + x3 = 100
// C2/102
//)b x1>1 x2>2 x3 > 3 a + b + c = 91 => c2/93
