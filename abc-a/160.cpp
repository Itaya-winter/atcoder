#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
   string s ;
   cin >> s;
   if(s[2] == s[3] && s[4] == s[5])
    {
        cout << "Yes" << endl;
        return 0;}
    cout << "No" << endl;
    return 0;
}