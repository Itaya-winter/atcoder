#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
bool my_compare(pair<int, string> a, pair<int, string> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
        // return a.first < b.first; // 昇順
        return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}
int main(){
    int n;
    string q;
    vector<pair<int,string>> a(n);
    int max = 1;
    vector<string> ans(n);
    int num;
    rep(i,n){
        cin >> q;
        rep(j,max){
            if(q == a[j].second){
                a[j].first++;
            }else{
                a[max].second == q;
                max++;                
            }
        }
    }
    sort(a.begin(),a.begin()+max-1,my_compare);
    rep(i,n){
        if(a[0].first == a[i].first){
            cout << a[i].second << endl;
            
       }
    }
    return 0;
}