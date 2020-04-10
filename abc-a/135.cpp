#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    if((a+b)%2 !=0)cout <<"IMPOSSIBLE";
    else cout << (a+b)/2;
    return 0;
}