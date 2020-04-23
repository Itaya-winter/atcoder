#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


int main (){
    string w;
    cin >> w;
    int a[26] = {0};
    rep(i,w.length()){
        a[(int)w[i]-97]++;
    }
    rep(i,26){
        if(a[i] %2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}