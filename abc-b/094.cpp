#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    int res = 0;
    cin >> n >> m >> x;
    vector<int> a(m);
    rep(i,m){
        cin >> a[i];
        if(a[i] > x){
            res = i;
            break;
        }
    }
    cout << min(res, m-res) << endl;
 
    return 0;
}