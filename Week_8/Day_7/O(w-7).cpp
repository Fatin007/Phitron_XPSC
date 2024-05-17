#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll cnt(vector<int>&a,int n){
    a.push_back(1);
    ll ans=0,z=0,o=0;
    bool start=false;
    for(int i=0;i<n+1;i++){
        if(a[i]==1) start=true;
        if(start){
            if(a[i]==1){
                ans+=z*o;
                o++;
                z=0;
            }
            else z++;
        }
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    vector<int>b=a,c=a;
    for(auto &i:b){
        if(i==0){
            i=1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(c[i]==1){
            c[i]=0;
            break;
        }
    }
    cout<<max({cnt(a,n),cnt(b,n),cnt(c,n)})<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}