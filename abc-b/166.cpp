#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,f;
    cin>> n >> k;
    int d[n] = {0};
    int keep;
    int g;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> f;
        for(keep=0;keep<f;keep++){
            cin >> g;
            d[g-1] = 1;
        }
    }
    rep(i,n){
        if(d[i] != 1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}