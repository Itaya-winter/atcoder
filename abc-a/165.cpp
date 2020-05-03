#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,a,b;
    cin >> k;
    cin >> a >> b;
    for (int i = 0; b>=k*i; i++)
    {
        if(k*i>=a){
            cout << "OK" << endl;
            return 0;
        }
    }

    cout  << "NG" << endl;
    return 0;
}