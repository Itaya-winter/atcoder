#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    rep(i,n){
        cin >> a[i];
    }
    int ans= 0;
    for (int i = 0; 1; i++)
    {
        for (int j = 0; j < n; j++){
            if(a[j]%2 ==1){ cout << ans << endl;
            return 0;
        }
            else a[j]/=2;    
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}