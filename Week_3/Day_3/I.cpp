#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,sum=0; cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    priority_queue<ll> pq;
    pq.push(0);
    for(int i=0;i<n;i++){
        if(!a[i]){
            sum+=pq.top();
            if(pq.top()) pq.pop();
        }
        else pq.push(a[i]);
    }
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}