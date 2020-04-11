#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a,b;
    cin >> a >> b;
    if(a>5 && a < 13) b = b/2;
    else if (a<6)b = 0;
    cout << b<< endl;
}