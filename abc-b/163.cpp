#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    ll n,m;
    int a;
    cin >> n >> m;
    rep(i,m){
        cin >> a;
        n=n-a;
    }
    if(n<0) cout << "-1" << endl;
    else cout << n << endl;
    return 0;
}