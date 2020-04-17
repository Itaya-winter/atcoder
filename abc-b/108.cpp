#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin >> a>> b>> c>> d;
    cout <<c+b-d<<" " <<d+c-a <<" "<<a-d+b<<" " << b+c-a<< endl;
    return 0;
}