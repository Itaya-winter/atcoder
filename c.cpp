#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    float  a,b;
    cin >> a>> b;
    if (a == b & a == 4){
        cout << "-1" << endl;
        return 0; 
    }
    int sub = b-a;

    if(sub *4> a)
    {
        cout << "-1" << endl;
        return 0;
    }
    else if(sub <0)
    {
        cout << "-1" << endl;
        return 0;
    }
    a = a*25/2;
    b = b*10;
    float ans = max(a,b);
    int t_ans ;
    if(ans!= (int)ans){
        t_ans = ans +1;
    }else{
        t_ans =ans;
    }
    cout << t_ans << endl;
    return 0;
}