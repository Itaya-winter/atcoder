#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    ll n;
    ll ans = 0;
    cin >>n;
    rep(i,n+1){
        if(i%3 !=0 &&i%5 != 0)ans +=i;
    }
    cout << ans;
    return 0;
}