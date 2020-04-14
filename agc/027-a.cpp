#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,x;
    int ans = 0;
    cin  >> n >> x ;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    } 
    sort(a.begin(),a.end());
    for (int i = 0; x > 0 && i< n; i++, ans ++ )
    {
       x -= a[i]; 
       if((x<0||i==n-1) && x !=0)ans--;
    }
    cout << ans << endl;
    return 0;
}