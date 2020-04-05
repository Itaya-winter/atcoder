#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin >> n >> r;
    if(n >=10){
        cout << r << endl;
        return 0;
    }
    cout << r + 100 * (10-n) << endl;
    return 0;
}