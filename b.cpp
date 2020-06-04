#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin >> n;
    ll a[n];
    rep(i,n){
        cin>>a[i];
        if(a[i] == 0){
            cout << 0 <<endl;
            return 0;
        }
    }
    ll ans=1;
    rep(i,n){
        ans = ans*a[i];
        if(ans>1000000000000000000){
            cout << -1 ;
            return 0;
        }
    }
    cout << ans ;
    return 0;
}