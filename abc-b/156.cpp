#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i;
    cin >> n >> k;
    for (i = 1;n >= pow(k,i) ;i++ );
    cout << i <<endl;
    return 0;
}