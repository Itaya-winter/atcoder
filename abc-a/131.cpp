#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0]==s[1]||s[2]==s[3]||s[1]==s[2])cout <<"Bad";
    else  cout << "Good";
    return 0;
}