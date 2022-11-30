#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		ll sum=0;
		cin >> n;
		priority_queue<ll, vector<ll>,greater<ll>> q;
		for(ll i=0;i<n;i++){
			ll temp;
			cin>>temp;
			q.push(temp);
		}
		while(q.size()>=2){
			ll temp1=q.top();
			q.pop();
			ll temp2=q.top();
			q.pop();
			sum+=((temp1+temp2));
			q.push((temp1+temp2));
		}
		cout<<sum<<endl;
		
	}
	
	
}





