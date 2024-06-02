#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define endl "\n"
using namespace std;

void solve(){
    int n,x; cin>>n>>x;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        int l=i+1, r=n-1;
        while(l<r){
            if(a[i].f+a[l].f+a[r].f==x){
                cout<<a[i].s<<" "<<a[l].s<<" "<<a[r].s<<endl;
                return;
            }
            else if(a[i].f+a[l].f+a[r].f<x) l++;
            else r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}