#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ,i;
    cin >>n;
    for ( i = 0; pow(2,i) <= n; i++);  
    cout <<pow(2,i-1) <<endl;
    
    return 0;
}