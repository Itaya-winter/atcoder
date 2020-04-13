#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    ll n;
    ll ans =0;
    cin >> n;
    for (ll i = 1; i <=n; ){
        ans+=i;
        i = i*2;
    }
    cout << ans<< endl;
    
    return 0;
}