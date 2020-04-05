#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rec;
    int min = 200001;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> rec;
        if(min > rec){
            ans++;
            min = rec;
        }

    }
    cout << ans <<endl;
    return 0;
}