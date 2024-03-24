#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool isPal(vector<int> &tmp){
    int n=tmp.size();
    for(int i=0; i<n/2; i++){
        if(tmp[i]!=tmp[n-i-1]) return false;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    deque<int> dq;
    for(int i=0; i<n; i++){
        cin>>v[i];
        dq.push_back(v[i]);
    }
    while(dq.size()){
        int l=dq.front(), r=dq.back();
        if(l==r){
            dq.pop_front();
            if(dq.size()) dq.pop_back();
            continue;
        }
        vector<int> tmp1,tmp2;
        for(auto x:v){
            if(x!=l) tmp1.push_back(x);
        }
        bool flg1=isPal(tmp1);
        for(auto x:v){
            if(x!=r) tmp2.push_back(x);
        }
        bool flg2=isPal(tmp2);
        if(flg1 or flg2){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}