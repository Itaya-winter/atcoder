#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n,k,q;
    cin >> n >> k >> q;
    int b[n];
    rep(i,n){
        b[i] = k-q;
    }
    vector<int> a(q);
    rep(i,q){
        cin >> a[i];
        b[a[i]-1]++;
    }
    rep(i,n){
        if(b[i] > 0)
        cout <<"Yes" << endl;
        else{
        cout <<  "No" << endl;
        }
    }
    return 0;
}