tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt#include <bits/stdc++.h>
using namespace std; 
int n,k,a[1005];
bool ok;
void in(){
  for(int i=1;i<=k;i++) cout << a[i];
  cout<<" ";
}

void sinh(){
  int i=k;
  while(i>0 && a[i]==n-k+i) i--;
  if(i<=0)
  {
    ok = false;
    return;
  }
  else{
    a[i]++;
    for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
  }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
      a[i] = i;
    }
    ok = true;
    while(ok){
      in();
      sinh();
    }
    cout << endl;
    

  }
  return 0;
}