/**************************************************
 *                                                *
 *   '||''''|     |     |''||''| '||' '|.   '|'   *
 *    ||  .      |||       ||     ||   |'|   |    *
 *    ||''|     |  ||      ||     ||   | '|. |    *
 *    ||       .''''|.     ||     ||   |   |||    *
 *   .||.     .|.  .||.   .||.   .||. .|.   '|    *
 *                                                *
 *************************************************/
#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define nl cout<<"\n";
#define endl "\n"
#define pb push_back
#define pbb pop_back
#define fr first
#define sc second
#define loop(i,x,n) for(ll i=x;i<n;i++)
#define loopp(i,n) for(ll i=n;i>=0;i--)
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end());
#define srtd(v) sort(v.begin(), v.end(), greater<int>());
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define check(x) cout<<#x<<" = " <<x<<endl;
#define check2(x,y) cout<<#x<<" = "<<x<<" \t"<<#y<<" = "<<y<<endl;
#define check3(x,y,z) cout<<#x<<" = "<<x<<" \t"<<#y<<" = "<<y<<" \t"<<#z<<" = "<<z<<endl;
#define bruh cout<<"Thik ase boddaa!\n";
#define Fatin ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool cmp(pair<ll,ll>a, pair<ll,ll>b){
    if(a.fr==b.fr) 
        return a.sc<b.sc;
    return a.fr>b.fr;
}

void solve(){
    ll n,x,h=-69; 
    cin>>n>>x; 
    vector<ll>v(n);
    loop(i,0,n) cin>>v[i]; 
    ll lo=0,hi=INT_MAX,curr=0; 
    while(hi-lo>=1){ 
        ll mid=(lo+hi)/2; 
        loop(i,0,n){ 
            if(mid>v[i]) curr+=(mid-v[i]); 
        } 
        if(curr<=x){ 
            h=mid; 
            lo=mid+1; 
        } 
        else hi=mid; 
        curr=0; 
    } 
    cout << h << endl; 
}

int main(){
    Fatin
    ll t=1;
    cin>>t;
    while(t--) solve();
}