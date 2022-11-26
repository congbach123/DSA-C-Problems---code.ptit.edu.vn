
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
void SieveOfEratosthenes(int n)
{
    // Initialize all entries of boolean array as true. A
    // value in isPrime[i] will finally be false if i is Not
    // a prime, else true bool isPrime[n+1];
    bool isPrime[n+1];
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;
  
    for (int p = 2; p * p <= n; p++) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p] == true) {
            // Update all multiples of p
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
    
    //cout<<isPrime[6]<<endl;
		F(i,0,n){
			if(isPrime[i] && isPrime[n-i]){
				cout<<i<<" "<<n-i;
				return;
			}
		}
		cout<<-1;
		
}
int main() {
	tester(){
		int n;
		cin>>n;
		
		SieveOfEratosthenes(n);
		cout<<endl;
	}
    return 0;
}





