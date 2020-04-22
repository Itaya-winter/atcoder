#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n,m;
    cin >> n >> m;
    int k;
    int l;
    int ans =0;
    int a[m] = {0};
    rep(i,n){
        cin>> k;
        rep(j,k){
            cin>> l;
            a[l-1]++;
        }
    }
    rep(i,m){
        if(a[i] == n){
            ans++;
        }
    }
    cout << ans << endl;
}