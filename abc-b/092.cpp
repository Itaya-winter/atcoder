#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,d,x;
    cin  >> n;
    cin >> d>>x;
    int a[n],b[n];
    int ans = 0;
    rep(i,n){
        cin >> a[i];
        b[i] = a[i]+1;
    }
    for (int i = 2; i <= d; i++)
    {
        rep(j,n){
            if(b[j] == i){
                ans++;
                b[j] += a[j];
            }
        }
    }
    cout << ans +x +n<< endl;
    return 0;
}