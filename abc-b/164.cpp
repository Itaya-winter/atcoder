#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin >> a >> b>> c >> d;
    while(1){
        a = a-d;
        c = c-b;
        
        if(c <= 0){
        cout << "Yes" << endl;
        return 0;
        }
        else if(a <= 0){
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}