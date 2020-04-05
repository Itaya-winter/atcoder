#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n);
    int sum = 0;
    int ans;
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ans = m * n -sum;
    if(ans > k)cout << "-1" << endl;
    else if (ans <0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    
    return 0;
}