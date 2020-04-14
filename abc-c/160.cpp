#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,n;
    cin >> k >> n;
    vector<int> a(n+1);
    vector<int> b(n);
    int ans =0;
    rep(i,n){
        cin >>a[i];
    }
    a[n] = k+ a[0];
    rep(i,n){
        b[i] = a[i+1] - a[i];
    }
    sort(b.begin(),b.end());
    rep(i,n-1){
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}