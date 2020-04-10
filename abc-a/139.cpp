#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[3];
    char t[3];
    int ans=0;
    cin >> s>>t;
    rep(i,3){
        if(s[i] == t[i])
        ans++;
    }
    cout <<ans <<endl;
    return 0;
}