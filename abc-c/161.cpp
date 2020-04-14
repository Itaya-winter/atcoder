#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    ll k,n;
    cin >> n >> k;
    cout << min(n%k,(k-n%k));
    return 0;
}