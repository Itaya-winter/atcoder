#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


    

int main(){
    int k;
    string s;
    cin >> k;
    cin >>s;
    if(s.length() <= k){
        cout << s <<endl;
    }
    else{
        cout << s.erase(k) << "..."<<endl;
    }
    return 0;
}