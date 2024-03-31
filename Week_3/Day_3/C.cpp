#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
ll a[205][205];

ll l_t(ll n, ll m, ll i, ll j){
    ll sum=0;
    i--; j--;
    while(i>=0 and j>=0){
        sum+=a[i][j];
        i--; j--;
    }
    return sum;
}

ll r_t(ll n, ll m, ll i, ll j){
    ll sum=0;
    i--; j++;
    while(i>=0 and j<m){
        sum+=a[i][j];
        i--; j++;
    }
    return sum;
}

ll l_b(ll n, ll m, ll i, ll j){
    ll sum=0;
    i++; j--;
    while(i<n and j>=0){
        sum+=a[i][j];
        i++; j--;
    }
    return sum;
}

ll r_b(ll n, ll m, ll i, ll j){
    ll sum=0;
    i++; j++;
    while(i<n and j<m){
        sum+=a[i][j];
        i++; j++;
    }
    return sum;
}

void solve(){
    ll n,m,mx=INT_MIN; cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll sum=a[i][j];
            sum+=l_t(n,m,i,j);
            sum+=r_t(n,m,i,j);
            sum+=l_b(n,m,i,j);
            sum+=r_b(n,m,i,j);
            mx=max(mx,sum);
        }
    }
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}