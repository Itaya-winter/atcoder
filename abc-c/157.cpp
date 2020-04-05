#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >>n >> m;
    char ans[n] = {0};
    ans[0] = '1';
    int num;
    vector<pair<int ,char>> s(m);
    for(int i =0;i<m;i++){
        cin >> s[i].first >> s[i].second;
    }
    sort(s.begin(),s.end());
    if(s[0].first ==1 && s[0].second ==0){
        cout << "-1"<<endl;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        if(i<m-1 && s[i].first == s[i+1].first&&s[i].second == s[i+1].second){
        cout << "-1"<<endl;
        return 0;
        }
        ans[s[i].first-1] = s[i].second;
    }
    num = atoi(ans);
   
    cout<< num << endl;
    return 0;
}