#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans =0;
    for (int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size()-1-i])ans++;
    }
    cout << ans << endl;
    return 0;
}