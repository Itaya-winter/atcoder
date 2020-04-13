#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c;
    cin >> n >> m >> c;
    int b[m];
    int a[n][m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    int ans =0;
    int res[n]= {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i] += b[j] * a[i][j];
        }
        res[i] +=c;
        if(res[i] >0)ans++;
    }
    cout << ans <<endl;
    return 0;
}