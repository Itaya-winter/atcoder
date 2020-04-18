#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin >> a>> b;
    string s;
    cin >> s;
    if(s.find('-') == a){
        s.replace(a,1,"1");
        if(s.find('-') == string::npos){
            if(s.length() == a+b+1)
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}