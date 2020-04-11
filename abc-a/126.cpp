#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main (){
    int k ,n;
    cin >> n >> k;
    char s[n];
    cin >> s;
    s[k-1] +=32;
    cout <<s<<endl;
    return 0;
}
