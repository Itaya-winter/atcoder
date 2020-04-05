#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> h(n);
    long long ans= 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] ;
    }
    sort(h.begin(),h.end());

    for (int i = 0; i < n-k; i++)
    {
        ans += h[i];
    }
    cout << ans << endl;
}