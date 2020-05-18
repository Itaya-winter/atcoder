#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


    

int main(){
    static const double pi = 3.141592653589793;
    long double a,b,h,m;
    cin >> a >> b>> h>> m;
    long double h_sin,h_cos,m_sin,m_cos;
    h_sin =a* sin((h+m/60)/6*pi);
    h_cos =a* cos((h+m/60)/6*pi);
    m_sin =b* sin(m/30*pi);
    m_cos =b* cos(m/30*pi);
    long double ans= pow(pow(h_sin-m_sin,2)+pow(h_cos-m_cos,2),0.5);
    cout << ans << endl;
    return 0;
}