#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main (){
    string a,b;
    int ab;
    cin >>a>>b;
    a = a+b;
    ab = stoi(a);
    for(int i = 0;i < ab/2 ;i++){
        if(ab == pow(i,2)){cout << "Yes" << endl;
        return 0;}
    }
    cout << "No" << endl;
    return 0;

}