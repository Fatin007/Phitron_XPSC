#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    map<int, int> dif;
    while(n--){
        int l,r; cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    int mx=0;
    for(auto it=dif.begin(); it!=dif.end(); it++){
        int x=it->second;
        ++it;
        it->second+=x;
        --it;
    }
    for(auto [x,y]: dif){
        mx=max(mx,y);
    }
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}