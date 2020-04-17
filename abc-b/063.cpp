#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j =i-1; j >=0; j--)
        {
            if(s[i] == s[j]){
                 cout << "no" << endl;
                 return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}