#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,a;
    cin >> h>>a;
    h = h+a-1;
    cout << (int)h/a<<endl;
    return 0;
}