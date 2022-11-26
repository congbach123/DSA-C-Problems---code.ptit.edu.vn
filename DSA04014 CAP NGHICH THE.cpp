
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000
#define rs(M,x) memset(M,x,sizeof(M))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll cnt=0;
void merge(ll arr[], ll p, ll q, ll r) {

  ll n1 = q - p + 1;
  ll n2 = r - q;
//
  ll L[n1], M[n2];

  for (ll i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (ll j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
	

  ll i, j, k;
  i = 0;
  j = 0;
  k = p;
//	for(int i=p;i<r-1;i++){
//  	for(int j=p+1;j<r;j++){
//  		if(arr[i]>arr[j] && i<j){
//  			cnt++;
//		}
//	}
//  }
  //
  
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
      cnt+=n1-i;
    }
    k++;
  }
	
  //
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
  //tim so nt
  
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(ll arr[], ll l, ll r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;
//	for(int i=l;i<=m;i++){
//  	for(int j=m+1;j<=r;j++){
//  		if(arr[i]>arr[j] && i<j){
//  			cnt++;
//		}
//	}
//  	}
    mergeSort(arr, l, m);
    
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

int main() {
	tester(){
		ll n;
		cin>>n;
		ll a[n+5];
		F(i,0,n) cin>>a[i]; //ll i?
		mergeSort(a,0,n-1);
		cout<<cnt<<endl;
		cnt=0;
	}
    return 0;
}





