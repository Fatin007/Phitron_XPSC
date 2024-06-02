#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    multiset<int> a;
    while(n--){
        int x; cin>>x;
        a.insert(x);
    }
    while(m--){
        int x; cin>>x;
        auto it=a.upper_bound(x);
        if(it==a.begin()) cout<<-1<<endl;
        else{
            cout<<*(--it)<<endl;
            a.erase(it);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}