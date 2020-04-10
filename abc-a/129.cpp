#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q,r;
    cin >> p>>q>>r;
    int ans = p+q+r-max(max(p,q),max(q,r));
    cout << ans<<endl;
    return 0;
}