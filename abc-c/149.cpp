#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x){
    if(x<=1) return false;
    for(int i = 2; i*i<=x;i++)
        if(x %i == 0) return 0;
    return 1;
    
}
int main(){
    int x;
    cin >> x;
    int p  = x;
    while (!is_prime(p))p++;
    cout  << p << endl;
    return 0;
}