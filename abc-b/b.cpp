#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    ll n , a,b;
    cin >> n >> a >> b;
    ll set = a + b;
    ll ans = n /(set);
    ans *= a;
    set = n % set;
    if(a>set){
        ans +=set;
    }else{
        ans +=a;
    }
    cout<< ans <<endl;
    return 0;
}