#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int cal(int n, vector<int>x,int ave){
    int ans = 0;
    for (int i = 1; i <=n; i++)
    {
        ans +=(x[i]-ave)*(x[i]-ave);
    }
    
    return ans;
}

int main(){
    int n ,ans;
    int ave = 0;
    int we =0;
    cin >> n;
    vector<int> x(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        ave += x[i];
    }
    ave =ave /n;
    ans = min (cal(n,x,ave),cal(n,x,ave+1));
    cout << ans << endl;
    return 0;
}