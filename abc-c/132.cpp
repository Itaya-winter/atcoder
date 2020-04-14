#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    cout << d[n/2] -d[n/2-1] << endl;
    return 0;

}