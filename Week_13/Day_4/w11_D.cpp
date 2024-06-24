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
    int sum=0;
    for(auto [x,y]: dif){
        sum+=y;
        if(sum>2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}