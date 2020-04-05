#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
string inswap(string s,char temp){
    temp= s[0];
    s[0] = s[s.size()-1];
    s[s.size()-1]= temp;
    return s;
}
string iniadd(string s,string temp){
    return temp + s;
}

string ketuadd(string s,string temp){
    return  s + temp;
}

int main(){
    char te;
    string s,temp;
    int q;
    int n;
    int k;
    cin >> s;
    cin >>q ;
    for (int i = 0; i < q; i++)
    {
        cin >>n;
        if(n==1){
            s =inswap(s,te);
        }else
        {
            cin >> k;
            if(k ==1){
                cin >> temp;
                s = iniadd(s,temp);
            }
            else
            {
                cin >> temp;
                s =ketuadd(s ,temp);
            }
            
        }
        
    }    
    cout << s <<endl;
    return 0;
}