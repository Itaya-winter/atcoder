#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int> b(46298);
    for (int i = 0; i < 46298; i++)
    {
        b[i] = i*1.08;
    }
    int n;
    cin >> n;
    for (int i = 0; i<46298; i++)
    {
        if(b[i]  == n){
            cout << i <<endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}