#include<bits/stdc++.h>
using namespace std;

int main (){
    int a, b,c;
    cin >> a >> b;
    c= min(a,b);
    a = max(a,b);
    for(int i = 0; i< a;i++){
        cout << c ;
    }  
    cout <<""<<endl;
}