#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int alice = 0,bob = 0;
    rep(i,n){
        if(i %2)bob+=a[i];
        else alice += a[i];
    }
    cout << alice-bob <<endl;
    return 0;
}