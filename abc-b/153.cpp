#include<bits/stdc++.h>
using namespace std;

int main(){
    long long h;
    int n;
    cin >> h >> n;
    long long  ans = 0;
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        ans += in;
    }
    if(ans >= h)
    cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    return 0;
    
}