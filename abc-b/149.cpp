#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(void){
     long long a,b,k;
    cin >> a>> b>> k;
    if(k>a){
        b =b-k+a;
        a = 0;
    }else{
        a = a-k;
    }
    if(a <0)a=0;
    if(b<0)b= 0;
    cout << a << " "<< b<< endl;
    return 0;
}