#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1) a[i]++;
	}
	for(int i=0;i<n-1;i++){
		if(a[i+1]%a[i]==0) a[i+1]++;
	}
    for(auto x: a) cout<<x<<" "; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}