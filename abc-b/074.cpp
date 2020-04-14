#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin >>n >> k;
    int x[n];
    int ans = 0;
    rep(i,n){
        cin >> x[i];
        ans += min(k-x[i],x[i]);
    }
    cout << ans *2 << endl;
    return 0;
}