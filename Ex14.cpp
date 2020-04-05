#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(max(a,b),max(b,c))-min(min(a,b),min(b,c)) << endl;
}