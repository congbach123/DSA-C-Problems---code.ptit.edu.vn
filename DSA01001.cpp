#include <bits/stdc++.h>
using namespace std; 

string s;

void solve(){
  int i=s.size()-1;
  while(i>=0 && s[i]=='1') i-=1;

  if(i<0)
  {
    for(int j=0;j<s.size();j++) s[j]='0';
  }

  else{
    s[i]='1';
    for(int j=i+1;j<s.size();j++)
    {
        s[j]='0';
    }
  }
}
void in()
{
  cout<<s<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>s;
    solve();
    in();
  }
  return 0;
}