#include <bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define endl "\n"
#define pb push_back
#define fr first
#define sc second
#define loop(i,x,n) for(ll i=x;i<n;i++)
#define loopp(i,n) for(ll i=n;i>=0;i--)
#define all(v) v.begin(), v.end()
#define outs(x) cout<<x<<" ";
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define check(x) cout<<#x<<" = " <<x<<endl;
#define check2(x,y) cout<<#x<<" = "<<x<<" \t"<<#y<<" = "<<y<<endl;
#define check3(x,y,z) cout<<#x<<" = "<<x<<" \t"<<#y<<" = "<<y<<" \t"<<#z<<" = "<<z<<endl;
#define Fatin ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll n; cin>>n;
    string ans;
    vector<string>v;
    map<string,int>m;
    loop(i,0,n){
        cin>>ans;
        v.pb(ans);
        m[ans]++;
    }
    ans="";
    loop(i,0,n){
        ll x=v[i].size();
        // check(v[i])
        bool flg=false;
        loop(j,0,x-1){
            string tmp1="", tmp2="";
            loop(k,0,x){
                // check2(tmp1,tmp2)
                if(k<=j) tmp1+=v[i][k];
                else tmp2+=v[i][k];
                // check2(tmp1,tmp2)
            }
            // check2(tmp1,tmp2)
            if(m[tmp1] and m[tmp2]){
                flg=true;
                break;
            }
        }
        if(flg) ans+="1";
        else ans+="0";
    }
    out(ans)
}

int main(){
    Fatin
    ll tc=1;
    cin>>tc;
    while(tc--) solve();
}