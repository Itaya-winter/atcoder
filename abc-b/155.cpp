#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        if(a[i]%2 == 0 &&a[i]%6 != 0  && a[i]%10 != 0){
        cout << "DENIED" << endl;
        return 0;            
       }
    }
    cout << "APPROVED" << endl;
    return 0;
}