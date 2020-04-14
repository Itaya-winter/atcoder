#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    rep(i,n){
        cin >> a[i].first ;
        a[i].second = i+1;
    }
    sort(a.begin(),a.end());
    rep(i,n){
        cout << a[i].second << " ";
    }
    return 0;

}