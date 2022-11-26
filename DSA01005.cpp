#include <bits/stdc++.h>
using namespace std; 
int n,a[1005];
bool ok;
void solve(){
  int i=n-1;
  while(i>=1 && a[i]>a[i+1]) i--;

  if(i<1){
    ok = false;
    return;
}
  else {
    int j=n;
    while (j>i && a[j]<a[i])j--;
    swap(a[i],a[j]);
    int l=i+1, r=n;
    while(l<r){
      swap(a[l],a[r]);
      l++;
      r--;
    }
    
    
  }
}
void in(){
  for(int i=1;i<=n;i++) cout << a[i];
  cout<<" ";
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(int i=1;i<=n;i++) a[i]= i;
    ok = true;
    while(ok)
    {
      in();
      solve();

    }
    cout<<endl;
  }
  return 0;
}