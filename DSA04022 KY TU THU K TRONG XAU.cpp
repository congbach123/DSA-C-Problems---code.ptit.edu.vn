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
		ll n,k;
		cin>>n>>k;
		ll res =1;
		while(k%2==0){
			k/=2;
			res++;
		}
		cout<<(char)(res+64)<<endl;;
	}
}





