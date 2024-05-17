#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
	cout<<n/2<<endl;
	if(n&1){
		cout<<"3 ";
		n-=3;
	}
	while(n){
		cout<<"2 ";
		n-=2;
	}
	cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}