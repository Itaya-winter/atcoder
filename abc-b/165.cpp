#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    ll x;
    ll ans;
    ll mam = 100;
    cin >> x;
    for (ans = 0;mam  < x; ans++)
    {
        mam = (ll)mam*1.01;
    }
    cout << ans << endl;

    return 0;
}