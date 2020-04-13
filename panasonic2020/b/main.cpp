#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    ll a,b;
    cin >> a >> b;
    if(a==1 || b==1)cout<<"1" << endl;
    else cout  << (ll)(a*b+1)/2 << endl;
    return 0;

}