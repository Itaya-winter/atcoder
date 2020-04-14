#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin >>n;
    vector<float> v(n);
    rep(i,n){
        cin >>v[i];
    }
    sort(v.begin(),v.end());
    rep(i,n-1){
        v[i+1] = (v[i] +v[i+1])/2;
    } 
    cout << v[n-1] <<endl;
    return 0;

}