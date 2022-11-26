#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string ngay ="00";
string thang = "02";
string nam ="2000";
string merge1="/" + thang  + "/";
vector<string> a;
void inNgay(){
	cout<<ngay;
	
}
void inNam(){
	cout<<nam;
}
bool check(string b){
	for(auto i:a){
		if(i==b) return false;
	}
	return true;
	
}
void in(){
	string final;
	final = ngay + merge1 + nam;
	if(check(final))
	if(ngay!="00"/*&&nam[0]=='2'&&nam[1]=='0'&&nam[2]==ngay[1]&&nam[3]==ngay[0]*/)
	{
		a.push_back(final);
		//cout<<final<<endl;
	}
	
}

void solve(int i){
	for(int j=0;j<=2;j+=2){
		ngay[i]=(char)j +'0';
		if(i==1){
			in();
			//solve2(1);
		}
		else solve(i+1);
	}
	
}
void solve2(int i){
	for(int j=0;j<=2;j+=2){
		nam[i]=(char)j +'0';
		if(i==3){solve(0);
			in();
			
		}
		else solve2(i+1);
	}
	
}
int main(){
	//in();
	//solve(0);
	solve2(1);
	sort(a.begin(),a.end());
	for(auto i:a){
		cout<<i<<endl;
	}
	return 0;
}

