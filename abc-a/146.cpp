#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
	cin >> s;
	if (s == "SAT")cout << 1 << endl;
	if (s == "SUN")cout << 7 << endl;
	if (s == "MON")cout << 6 << endl;
	if (s == "TUE")cout << 5 << endl;
	if (s == "WED")cout << 4 << endl;
	if (s == "THU")cout << 3 << endl;
	if (s == "FRI")cout << 2 << endl;
	return 0;
}