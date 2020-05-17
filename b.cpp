#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a,b,c,k;
    cin >>a >> b >> c >> k;
    if(a >= k){
        cout << k << endl;
    }
    else if(a + b >= k){
        cout << a <<endl;
    }
    else cout <<a-(k-a-b) << endl;
   return 0;
}