    #define ll long long
    #define INF 99999999
    #define rep(i, n) for(int i = 0; i < (int)(n); i++)
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b && b ==c){
        cout << "No" << endl ;
        return 0;  
        }
        else if(a == b || b == c || c == a){
            cout << "Yes" << endl ;
            return 0;
        }
            cout << "No" << endl ;
        return 0;
    }
