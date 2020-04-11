#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main (){
    int n,m;
    cin >> n >> m;
    int sum = 0;
    vector<int>a(n);
    rep(i,n){
        cin >>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    if(a[m-1]>=(double)sum/(4*m)) cout << "Yes"<<endl;
    else cout << "No" << endl;
    return 0;
}