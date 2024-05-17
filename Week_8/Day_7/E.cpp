#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool Predicate(vector<int>&a,ll m){
    int dif=a[0]+m;
    int cnt=1;
    for(int i=1;i<a.size();i++){
        if(abs(a[i]-dif)>m){
            cnt++;
            dif=a[i]+m;
        }
        if(cnt>3) return false;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    sort(a.begin(),a.end());
    ll l=0,r=2e14;
    while(r-l>5){ // Fatin's bakchodi threshold:3
        ll m=(l+r)/2;
        if(Predicate(a,m)) r=m;
        else l=m;
    }
    for(int i=l;i<=r;i++){
        if(Predicate(a,i)){
            cout<<i<<endl;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}