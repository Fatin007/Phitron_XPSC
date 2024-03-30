#include <bits/stdc++.h>
#define ll long long
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
#define nl cout<<endl;
using namespace std;

void solve(){
	int n,count=0;
    string s;
    cin>>n>>s;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=max(i,(n-i-1));
    }
    ll a[n];
    ll b[n]={0};
    for(int i=0;i<n;i++) a[i]=sum;
    for(int i=0;i<n;i++){
        int l=i;
        int r=n-i-1;
        if(s[i]=='L'){
            if(r>l){
                b[count]=r-l;
                count++;
            }
        }
        else if(s[i]=='R'){
            if(l>r){
                b[count]=l-r;
                count++;
            }
        }
    }
    sort(b,b+count);
    for(int i=0;i<count-1;i++){
        a[i]=sum-b[i];
        sum-=b[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";nl
}

int main(){
	int t;
	cin>>t;
	while(t--)
	solve();
}