#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define N 100010
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,h[N],ma[N];
    cin >> n >> m;
    for(int i= 1;i<=n;i++){
        cin >> h[i];
        ma[i] = 0;
    }
    rep(i,m){
        int a,b;
        cin >> a >> b;
        ma[a] = max(ma[a],h[b]);
        ma[b] = max(ma[b],h[a]);
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        ans += h[i]>ma[i];
    }
    return 0;
}