#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >>n >> m;
    if(n > 1){
        n = n * (n-1) / 2;
    }else n=0;
    if(m >1){
        m = m *(m-1)/2;
    }else m = 0;
    cout << m+n <<endl;
    return 0;
}