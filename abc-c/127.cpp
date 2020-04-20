#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int m,n;
    cin >> n>> m;
    vector<int> a(m),b(m);
    int l,r;
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    l = *max_element(a.begin(),a.end());
    r = *min_element(b.begin(),b.end());
    if(l <= r)cout << r-l+1<< endl;
    else cout << 0 << endl;
    return 0;

}