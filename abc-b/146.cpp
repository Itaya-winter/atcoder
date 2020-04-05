#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    int n;
    cin >> n>> s;
    for (int i = 0; i <s.size(); i++)
    {
        int x = s[i]-'A';
        x = (x+n)%26;
        cout<<(char) ('A'+x); 
    }
    cout<<endl;
    return 0;
}