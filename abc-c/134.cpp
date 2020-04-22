#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end(),greater<int>());
    rep(i,n){
        if(a[i] == b[0]) cout << b[1] << endl;
        else cout << b[0] << endl;
    }

    return 0;
}