#include<bits/stdc++.h>
using namespace std;

int main (){
    long long n;
    cin>>n;
    long long ans = n+1;
    for(long long i =1;i<=pow(n,0.5);i++){
        if(n%i == 0){
            if(ans>i+n/i)ans = i+n/i;
        }
        
    }
    cout<<ans-2<<endl;
    return 0;
}