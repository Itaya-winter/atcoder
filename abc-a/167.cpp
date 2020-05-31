#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;


    

int main(){
    int n;
    cin >>n;
    if(n%10 == 2 || n%10 == 4|| n%10 ==5|| n%10 ==7 || n%10 ==9)cout << "hon" << endl;
    if(n%10 ==0 || n%10 == 1|| n%10 ==6|| n%10 ==8){
        cout << "pon" << endl;
    }
    if( n%10 ==3)cout << "bon" << endl;
    return 0;
}