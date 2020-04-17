#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    int a = stoi(s);
    int mi = 999;
    int loop = s.length()-3;
    rep(i,loop){
        if(a> 753*pow(10,loop-i))mi=min(mi,(a-753*(int)pow(10,loop-i))/(int)pow(10,loop-i));
        else mi=min(mi,(753*(int)pow(10,loop-i)-a)/(int)pow(10,loop-i));
        a = a %(int)pow(10,loop+i);
    }
    cout << mi <<endl;
    return 0;
}