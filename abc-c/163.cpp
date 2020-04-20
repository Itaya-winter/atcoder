#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int b;
    int a[n+1] = {0};
    rep(i,n-1){
        cin >> b;
        a[b]++;
    }
    for(int i =1;i<=n;i++){
        cout << a[i] << endl;
    }
    return 0;
}