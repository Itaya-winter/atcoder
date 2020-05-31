#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std; 
int main(){
   string s ,t;
   cin >> s >> t;
   for (int i = 0; i < s.length(); i++)
   {
       if(s[i] != t[i]){
       cout << "No" << endl;
       return 0;}
   }
   cout << "Yes" << endl;
   return 0;
}