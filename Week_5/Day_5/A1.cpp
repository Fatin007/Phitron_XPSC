#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(vector<int>&a, int n){
    int x; cin>>x;
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        // cout<<l<<" "<<r<<" "<<m<<endl;
        if(a[m]==x){
            cout<<"YES"<<endl;
            return;
        }
        else if(a[m]>x) r=m-1;
        else l=m+1;
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    while(k--) solve(a,n);
}