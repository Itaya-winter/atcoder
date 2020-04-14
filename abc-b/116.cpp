#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int s;
    cin >> s;
    int i = 1;
    while (1)
    {
        if(s == 4 || s == 2 || s == 1){
            cout<< i+3 << endl;
            return 0;
        }
        if(s %2 ==1){
            s  = 3*s +1;
            i++;
        }
        else {
            s = s/2;
            i++;
        }
    }
    
    return 0;
}