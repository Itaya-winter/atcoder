#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    int ans = 0;
    rep(i,s.length()){
        if(s[i] == 'I') x++;
        else x--;
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}