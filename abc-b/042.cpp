#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    int l,n;
    cin >> n >> l;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    rep(i,n){
        cout<< s[i] ;
    }
    return 0;

}