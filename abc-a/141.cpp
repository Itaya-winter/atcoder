#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main (){

    string s;
    cin >> s;
    if(s == "Sunny")cout << "Cloudy"<< endl;
    if(s == "Cloudy")cout << "Rainy" << endl;
    if(s == "Rainy")cout << "Sunny" <<endl;
    return 0;
}